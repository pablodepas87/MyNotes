function miafunzione() {
  console.log('Hello World');
  document.querySelector('h1').innerText = 'Ho cliccato sul pulsante!'
  document.querySelector('#btn1').classList.add("invisible")
}


function miafunzione2() {

    document.querySelector('h1').innerText = 'Ho cliccato sul pulsante 2!'
    document.querySelector('ul').firstElementChild.innerHTML = '<a href="https://www.google.com">Google</a>'
    
}