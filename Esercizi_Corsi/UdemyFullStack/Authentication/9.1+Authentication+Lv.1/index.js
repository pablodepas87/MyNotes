import express from "express";
import bodyParser from "body-parser";
import pg from "pg";

const app = express();
const port = 3000;

const db = new pg.Client({
  "user": "postgres",
  "password": "admin",
  "host": "localhost",
  "port": 5432,
  "database": "secrets"
})

db.connect();

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));

app.get("/", (req, res) => {
  res.render("home.ejs");
});

app.get("/login", (req, res) => {
  res.render("login.ejs");
});

app.get("/register", (req, res) => {
  res.render("register.ejs");
});

app.post("/register", async (req, res) => {

  const username = req.body.username;
  console.log(username);
  const password = req.body.password
  console.log(password);
  
  try {

    const queryCheck = 'SELECT * FROM users WHERE username = $1';
    const resultCheck = await db.query(queryCheck,[username]);
    if(resultCheck.rows.length > 0) {
      res.send("User already exist.Try again with different username");
    } else {
      const query = 'INSERT INTO users (username,password) VALUES ($1,$2)';
      const result = await db.query(query,[username,password]); 
      res.render("secrets.ejs");
    }
  } 
  catch(err) {
    console.log(err);
  }; 

});

app.post("/login", async (req, res) => {
  const username = req.body.username;
  console.log(username);
  const password = req.body.password
  console.log(password);

  try{
    const query = 'SELECT * FROM users WHERE username = $1';
    const result = query(query,[username]);
    if(result.rows.length>0){
      const user = result.rows[0];
      const storedPassword = user.password;
      if(password === storedPassword){
        res.render("secrets.ejs");
      } else {
        res.send("Incorrect password"); 
      }
    } else {
      res.send("User does not exist");
    }
  } catch(err) {
    console.log(err);
  }
});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});
