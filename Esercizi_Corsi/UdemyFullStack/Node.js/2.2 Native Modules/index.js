const fs = require('fs');

fs.writeFile('helloWorld.txt', 'hello world from Node.js', (err) => {
    if (err) throw err;
    console.log('the file has been saved!')
})

const fsystem = require('fs');

fsystem.readFile('helloWorld.txt','utf-8',(err,data)=>{
    if(err) throw err;
    console.log(data);
})