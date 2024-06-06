document.onload = rolltheDice();

function rolltheDice() {
    var randomNumber1 = Math.floor(Math.random() * 6) + 1; //1-6

    switch (randomNumber1) {
        case 1: document.querySelector(".img1").setAttribute("src", "images/dice1.png");
            break;
        case 2: document.querySelector(".img1").setAttribute("src", "images/dice2.png");        
            break;
        case 3: document.querySelector(".img1").setAttribute("src", "images/dice3.png");
            break;
        case 4: document.querySekector(".img1").setAttribute("src", "images/dice4.png");
            break;
        case 5: document.querySelector(".img1").setAttribute("src", "images/dice5.png");
            break;
        case 6: document.querySelector(".img1").setAttribute("src", "images/dice6.png");
            break;
        default: document.querySelector(".img1").setAttribute("src", "");
            break;    
    }

    var randomNumber2 = Math.floor(Math.random() * 6) + 1; //1-6

    switch (randomNumber2) {    
        case 1: document.querySelector(".img2").setAttribute("src", "images/dice1.png");
            break;
        case 2: document.querySelector(".img2").setAttribute("src", "images/dice2.png");    
            break;
        case 3: document.querySelector(".img2").setAttribute("src", "images/dice3.png");    
            break;
        case 4: document.querySelector(".img2").setAttribute("src", "images/dice4.png");
            break;
        case 5: document.querySelector(".img2").setAttribute("src", "images/dice5.png");
            break;
        case 6: document.querySelector(".img2").setAttribute("src", "images/dice6.png");
            break;
        default: document.querySelector(".img2").setAttribute("src", "");
            break;
    }

    if(randomNumber1 > randomNumber2) {
        document.querySelector("h1").innerHTML = "🚩Player 1 Wins!";
    } else if(randomNumber1 < randomNumber2) {
        document.querySelector("h1").innerHTML = "Player 2 Wins! ";
    } else {
        document.querySelector("h1").innerHTML = "Draw!";
    }
}
// metodo due 
/*

var randomNumber1 = Math.floor(Math.random() * 6) + 1; //1-6
var imageName = "dice" + randomNumber1 + ".png"; //dice1.png - dice6.png
var randomImageSource = "images/" + imageName; //images/dice1.png - images/dice6.png
var imageDice1 = document.querySelectorAll("img")[0]
imageDice1.setAttribute("src", randomImageSource);

var randomNumber2 = Math.floor(Math.random() * 6) + 1; //1-6
var imageDice2Name = "dice" + randomNumber2 + ".png"; //dice1.png - dice6.png
var randomImageDice2Source = "images/" + imageName; //images/dice1.png - images/dice6.png
var imageDicec2 = document.querySelectorAll("img")[1]
imageDicec2.setAttribute("src", randomImageSource);

if(randomNumber1 > randomNumber2) {
    document.querySelector("h1").innerHTML = " Player 1 Wins!";
} else if(randomNumber1 < randomNumber2) {
    document.querySelector("h1").innerHTML = "Player 2 Wins! ";
} else {
    document.querySelector("h1").innerHTML = "Draw!";
}

*/




