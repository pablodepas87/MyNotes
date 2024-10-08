import express from "express";
import axios from "axios";

const app = express();
const port = 3000;

// 3. Use the public folder for static files.
app.use(express.static("public"));

// 5. Use axios to get a random secret and pass it to index.ejs to display the
// secret and the username of the secret.

app.get("/", async (req, res) => {
    try {
        const result = await axios.get("https://secrets-api.appbrewery.com/random");
        res.render("index.ejs", {
            secret: result.data.secret,
            user: result.data.username
        }); 
    } catch (error) {
        console.log(error.response.data);
        res.status(500);
    }
})

// 6. Listen on your predefined port and start the server.
app.listen(port, () => {
    console.log(`Server is running on port ${port}`);
})