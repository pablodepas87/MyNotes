import express from "express";
import bodyParser from "body-parser";
import pg from "pg";

const app = express();
const port = 3000;

const db = new pg.Client({
  user: "postgres",
  host: "localhost",
  database: "world",
  password: "admin",
  port: 5432
})

db.connect((err) => {
  if(err) {
    console.error(err)
  } else {
    console.log("Connected to the database")
  } 
});

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));

app.get("/", async (req, res) => {
  // dichiaro una variabile query che contiene la query che voglio eseguire
  const query = "SELECT country_code FROM visited_countries";
  // eseguo la query e salvo il risultato in queryResult
  const queryResult = await db.query(query);
  // stampo il risultato della query
  console.log(queryResult.rows)
  // creo un array vuoto countries
  let countries=[]
  // per ogni riga del risultato della query, pusho l'oggetto riga nell'array countries
  queryResult.rows.forEach( country => {
    countries.push(country.country_code)
  })
  // renderizzo la pagina index.ejs passando l'array countries e la lunghezza dell'array countries
  res.render("index.ejs", { countries: countries, total:countries.length });

});

app.listen(port, () => {
  console.log(`Server running on http://localhost:${port}`);
});
