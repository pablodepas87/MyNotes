import express from 'express'

const newServer = express()

newServer.listen(3000, () => {
    console.log('Server is running on port 3000')
});

newServer.get('/', (req, res) => {
    console.log(req);
    res.send('<h1> Hello World </h1>');  // questo get per la cartella /del derver mi restituisce la stringa <h1> Hello World </h1>
});

newServer.get('/about',(request, response) => {
    response.send('<h1> About Me page </h1>');
});

newServer.get('/contact', (request,response) => {
    response.send('<h1> Contact page </h1> <p> Contact me at:3405660671');
})

