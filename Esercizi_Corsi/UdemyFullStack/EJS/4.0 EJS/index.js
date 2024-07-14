import express from 'express';

const app = express();
const port = 3000;

app.listen(port, () =>{
    console.log('Server is running on port 3000');
})

function getDay() {
    const date = new Date();
    var dayOfWeek = date.getDay();
    return dayOfWeek;
}

app.get('/', (req, res) => {
    res.render("index.ejs",{
        dayType: getDay() === 0 || getDay() === 6 ? "it's weekend" : "it's a workday",
        advice: getDay() === 0 || getDay() === 6 ? "it's time to rest" : "it is time to hard work!"
    });
})

