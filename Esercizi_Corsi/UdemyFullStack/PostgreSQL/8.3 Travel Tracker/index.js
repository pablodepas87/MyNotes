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

async function checkVisitedCountries() {
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
    // ritorno l'array countries
    return countries;
}

app.get("/", async (req, res) => {
  const countries = await checkVisitedCountries();
  // renderizzo la pagina index.ejs passando l'array countries e la lunghezza dell'array countries
  res.render("index.ejs", { countries: countries, total:countries.length });

});

add.post("/add", async(req,res) => {
  // raccolgo il valore del campo country dalla richiesta
  const country = req.body["country"];
  // eseguo una query per selezionare tutti i paesi visitati con lo stesso country_code
  const result = await db.query('SELECT * FROM visited_countries WHERE country_code = $1', [country])
  // se il risultato della query ha una lunghezza maggiore di 0, reindirizzo alla home , è possibile che il paese sia già stato inserito
  if(result.rows.length > 0) {
    res.redirect("/");
    return;
  }
  // altrimenti eseguo una query per inserire il paese nella tabella visited_countries
  const query = `INSERT INTO visited_countries (country_code) VALUES ($1)`;
  await db.query(query,[country]);
  res.redirect("/");
})

app.listen(port, () => {
  console.log(`Server running on http://localhost:${port}`);
});
