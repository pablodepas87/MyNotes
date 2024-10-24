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

app.post("/add", async(req,res) => {
  const input = req.body["country"];

  /* // solution 2
  const result = await db.query(
    "SELECT country_code FROM countries WHERE country_name = $1",
    [input]
  );

  if (result.rows.length !== 0) {
    const data = result.rows[0];
    const countryCode = data.country_code;

    await db.query("INSERT INTO visited_countries (country_code) VALUES ($1)", [
      countryCode,
    ]);
    res.redirect("/");
  }*/

  // solution 3 
  try {
    const result = await db.query(
      "SELECT country_code FROM visited_countries WHERE country_code = $1",
      [input]
    );

    const data = result.rows[0];
    const countryCode = data.country_code;

    try {
      await db.query(
        "INSERT INTO visited_countries (country_code) VALUES ($1)",
        [countryCode]
      );
      res.redirect("/");
    }catch(err) {
      console.log(err)
      const countries = await checkVisitedCountries();
      res.render("index.ejs", {
        countries: countries,
        total: countries.length,
        error: "Country has already been added, try again."
      })
    }

  } catch (err) {
    console.log(err);
    const countries = await checkVisitedCountries();
    res.render("index.ejs", {
      countries: countries,
      total: countries.length,
      error: "Country name does not exist, try again."
    })
  } 

})

app.listen(port, () => {
  console.log(`Server running on http://localhost:${port}`);
});
