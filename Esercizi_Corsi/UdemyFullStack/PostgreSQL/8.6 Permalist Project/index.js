import express from "express";
import bodyParser from "body-parser";
import pg from "pg";

const app = express();
const port = 3000;

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));

const db = new pg.Client({
  user: "postgres",
  host: "localhost",
  database: "permalist",
  password:"admin",
  port: 5432,
})

db.connect((err) => {
  if(err) {
    console.log(err);
  } else {
    console.log("Connected to the database"); 
  } 
})

let items = [
  { id: 1, title: "Buy milk" },
  { id: 2, title: "Finish homework" },
];

app.get("/", async (req, res) => {

  try {
    const query = "SELECT * FROM items ORDER BY id ASC";
    const result = await db.query(query);
    const items = result.rows;
    
    res.render("index.ejs", {
      listTitle: "Today",
      listItems: items,
    });
  } catch (err) {
    console.log(err); 
  }
  
});

app.post("/add", async (req, res) => {
  try {
    const item = req.body.newItem
    const query = "INSERT INTO items(title) VALUES($1)";
    await db.query(query, [item]);
    res.redirect("/");
  } catch (err) {
    console.log(err);
  }
  
});

app.post("/edit", async (req, res) => {
    const id = req.body.updatedItemId;
    const title = req.body.updatedItemTitle;
    try {
      const query = "UPDATE items SET title = $1 WHERE id = $2"
      await db.query(query,[title, id]);
      res.redirect("/");
    } catch (err) {
      console.log(err);
    }
});

app.post("/delete", async (req, res) => {
  try {
    const id = req.body.deleteItemId;
    const query = "DELETE FROM items WHERE id = $1";
    await db.query(query,[id])
    res.redirect("/");
  } catch (err) {
    console.log(err);
  }

});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});
