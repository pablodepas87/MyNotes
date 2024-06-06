jQuery("h1").text("Hello World!")
jQuery("h1").css("color", "red")


$('h1').html('<a href="https://www.google.com" target="_blank">Google</a>')

// Opzione 2: Aggiungere il link dopo il contenuto esistente
$('h1').append(' <a href="https://www.google.com" target="_blank">Google</a>');
$('body').append('<p>Questo è un nuovo paragrafo con </p>')
$('p').append('<a href="https://www.google.com" target="_blank">Google</a>')
$('p').append(' link')

$('a').attr('href', 'https://www.bing.com')
$('button').attr('class', 'btn')

// aggiungere una classe a un elemento

$('button').addClass('btn')
$('button').click(function(){
    $('h1').addClass('red')
    $('h1').text('Hello World!')
})

setTimeout(function() { 
    $('button').removeClass('btn')
}, 2000);


// se l'elemento ha già altre classi
$('h2').attr('class', function(index, currentClasses) {
    return currentClasses + ' paragrafo';
});

// aggiungere un evento di keypèress al documento
$(document).keypress(function(event){
     console.log(event.key)
     $('h1').text(event.key)
})

$('h1').text('Hello World!')

$('h1').on('mouseleave', function(){
    $('h1').removeClass('paragrafo')
    $('h1').addClass('paragrafo2')
})  

$('h1').on('mouseenter', function(){
    $('h1').removeClass('paragrafo2')
    $('h1').addClass('paragrafo')
})

// posizionare un button prima di h1
$('h1').before('<button id="insSopra">Inserito prima</button>')

// posizionare un button dopo h1
$('h1').after('<button id="insSotto">Inserito dopo</button>')

// posizionare un button di fianco a h1 ma dopo sull stessa riga
$('h1').prepend('<button id="insDopoPrm">Inserito dopo di fianco ma prima</button>')

// posizionare un button di fianco a h1 ma dopo sull stessa riga
$('h1').append('<button id="insDopo">Inserito dopo di fianco</button>')

$('p').on('click', function(){
    $('p').hide()
    $('h2').text('Paragrafo nascosto clicca mi per farlo riapparire')
})

$('h2').on('click', function(){
    $('p').show()
    $('h2').text('Paragrafo riapparso clicca il paragrafo per nasconderlo')
})

$('parag').on('click', function(){
    $('parag').toggle()
    $('h1').text('Clicca mi per farlo riapparire')
})


$('button').on('click', function(){
    $('parag').fadeToggle()
})  

$('pa')
