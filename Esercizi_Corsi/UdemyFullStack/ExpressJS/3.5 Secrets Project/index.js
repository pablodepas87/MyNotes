
import express from 'express';
import bodyParser from 'body-parser';
import { dirname } from 'path';
import { fileURLToPath } from 'url';    

const port = 3000;
const app = express();

const __dirname = dirname(fileURLToPath(import.meta.url));



app.use(bodyParser.urlencoded({ extended: true }));
var userIsAuthorised = false;

function checkPassword(req,res,next) {
    const correctPassword = 'ILoveProgramming';
    if (req.body["password"] === correctPassword) {
        userIsAuthorised = true;
    }    
    next();
};

app.use(checkPassword);

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/public/index.html');
});


app.post('/check', (req, res) => {
    if(userIsAuthorised){
        res.sendFile(__dirname + '/public/secret.html');
    }
    else{
        res.sendFile(__dirname + '/public/index.html');
    }
});

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
});