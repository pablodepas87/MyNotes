/* aggiungere un even listerner al bottone

document.querySelector('button').addEventListener('click', function() {
    // query selector seleziona solo il primo pulsante
    alert('Button clicked')
})

*/

/* secondo modo per aggiuìungere un event listener

document.querySelector('button').onclick = function() {
    alert('Button clicked')
}
*/

/* terzo modo per aggiungere un event listener

function buttonClick() {
    alert('Button clicked')
}

document.querySelector('button').addEventListener('click', buttonClick)
*/

// aggiungere ad ogni pulsante un event listener  che scrive ciao sono il pulsante 1, 2, 3, 4, 5 al doppio click

document.querySelectorAll('button').forEach(function(button,indiceButton){  
    button.addEventListener('dblclick', function(){
        alert('Ciao sono il pulsante'+ (indiceButton + 1));
    })      
})

/* un altro modo per fare la stessa cosa utilizzando un ciclo for

var numberDrum = document.querySelectorAll('.drum').length

for (var i = 0; i < numberDrum; i++) {
    document.querySelectorAll('.drum')[i].addEventListener('click', function(){
        alert('Ciao sono il pulsante'+ (i + 1))
    })
}
*/


/*

/* passere ad una funzione un metodo e parametri

function add(num1, num2) {  // funzione add con due parametri   
    return num1 + num2
}   

function sub(num1, num2) {  // funzione sub con due parametri

    return num1 - num2  
}   

function calc(num1, num2, operator) {  // funzione calc con tre parametri
    return operator(num1, num2)  // ritorna il risultato della funzione operator
}

calc(5, 3, add)  // 8
calc(5, 3, sub)  // 2

*/

document.querySelectorAll('.drum').forEach(function(button,index){
    var audio = new Audio('')

    button.addEventListener('click', function(){
        switch(index){
            case 0:
                audio.src = 'sounds/tom-1.mp3'
                audio.play()
                break
            case 1:
                audio.src = 'sounds/tom-2.mp3'
                audio.play()
                break
            case 2:
                audio.src = 'sounds/tom-3.mp3'
                audio.play()
                break
            case 3:
                audio.src = 'sounds/tom-4.mp3'
                audio.play()
                break
            case 4:
                audio.src = 'sounds/snare.mp3'
                audio.play()
                break
            case 5:
                audio.src = 'sounds/crash.mp3'
                audio.play()
                break
            case 6:
                audio.src = 'sounds/kick-bass.mp3'
                audio.play()
                break
        }
    })
})

/* come si crea un oggetto in javascript

var obj = {
    property1: 'value1',
    property2: ['value2', 'value3'],
    method: function() {
        console.log('method')
    }
}

console.log(obj.property1) // value1
obj.method() // method

*/

/* come si crea una costruttore in javascript

function Person(name, surname) {
    this.name = name
    this.surname = surname
    this.fullName = function() {
        return this.name + ' ' + this.surname
    }
}    

var person1 = new Person('Mario', 'Rossi')

person1.fullName() // Mario Rossi

*/


// aggiungo un keypress event listener per ascoltare i tasti premuti sulla tastiera

document.querySelectorAll('.drum').forEach(function(button){
    var audio = new Audio('')

    button.addEventListener('keypress', function(event){    
        switch(event.key){
            case 'w':
                audio.src = 'sounds/tom-1.mp3'
                audio.play()
                //addAnimation(button)
                break
            case 'a':
                audio.src = 'sounds/tom-2.mp3'
                audio.play()
                break
            case 's':
                audio.src = 'sounds/tom-3.mp3'
                audio.play()
                break
            case 'd':
                audio.src = 'sounds/tom-4.mp3'
                audio.play()
                break
            case 'j':
                audio.src = 'sounds/snare.mp3'
                audio.play()
                break
            case 'k':
                audio.src = 'sounds/crash.mp3'
                audio.play()
                break
            case 'l':
                audio.src = 'sounds/kick-bass.mp3'
                audio.play()
                break
        }    
    })
})
 
/* creare una funzione di callback per il keypress event listener

function anotherEventListener(typeOfEvent, callback) {
   var eventThatHappened = {
       eventType: 'keypress',
       key: 'p',
       durationOfKeypress: 2
   }
    if (eventThatHappened.eventType === typeOfEvent) {
         callback(eventThatHappened)
    }
}   

anotherEventListener('keypress', function(event) {
    console.log(event)
})

*/

function addAnimationType1(button) {
    button.classList.add('pressed')
    setTimeout(function (){
        button.classList.remove('pressed')
    },200)  // 200 millisecondi
}

function addAnimation(button) {
    button.classList.add('pressed')
}

function removeAnimation(button) {
    button.classList.remove('pressed')
}


document.querySelectorAll('.drum').forEach(function(button,index){
    button.addEventListener('mousedown', function(){
        switch(index){
            case 0:
                addAnimation(button)
                break
            case 1:
                addAnimation(button)
                break   
            case 2: 
                addAnimation(button)
            break
            case 3:
                addAnimation(button)
                break
            case 4:
                addAnimation(button)
                break   
            case 5:
                addAnimation(button)
                break
            case 6:
                addAnimation(button)
                break
        }
    })
})

document.querySelectorAll('.drum').forEach(function(button,index){
    button.addEventListener('mouseup', function(){
        switch(index){
            case 0:
                removeAnimation(button)
                break
            case 1:
                removeAnimation(button)
                break   
            case 2: 
                removeAnimation(button)
            break
            case 3:
                removeAnimation(button)
                break
            case 4:
                removeAnimation(button)
                break   
            case 5:
                removeAnimation(button)
                break
            case 6:
                removeAnimation(button)
                break
        }
    })
})

document.querySelectorAll('.drum').forEach(function(button){
    button.addEventListener('keydown', function(e){
        switch(e.key){
            case 'w':
                addAnimation(button)
                break
            case 'a':
                addAnimation(button)
                break
            case 's':
                addAnimation(button)
                break
            case 'd':
                addAnimation(button)
                break
            case 'j':
                addAnimation(button)
                break
            case 'k':
                addAnimation(button)
                break
            case 'l':
                addAnimation(button)
                break
        }
    })
})

document.querySelectorAll('.drum').forEach(function(button){
    button.addEventListener('keyup', function(e){
        switch(e.key){
            case 'w':
                removeAnimation(button)
                break
            case 'a':
                removeAnimation(button)
                break
            case 's':
                removeAnimation(button)
                break
            case 'd':
                removeAnimation(button)
                break
            case 'j':
                removeAnimation(button)
                break
            case 'k':
                removeAnimation(button)
                break
            case 'l':
                removeAnimation(button)
                break
        }
    })
})