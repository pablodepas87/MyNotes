# C++ Exception Handling

La gestione delle eccezioni in C++ è un processo per gestire gli errori di runtime. Eseguiamo la gestione delle eccezioni in modo che il normale flusso dell'applicazione possa essere mantenuto anche dopo gli errori di runtime.

In C++, l'eccezione è un evento o un oggetto generato in fase di esecuzione. Tutte le eccezioni derivano dalla classe **std::exception**. È un errore di runtime che può essere gestito. Se non gestiamo l'eccezione, viene stampato il messaggio di eccezione e termina il programma.

## Advantage

Mantiene il normale flusso dell'applicazione. In tal caso, il resto del codice viene eseguito anche dopo l'eccezione.

## C++ Exception Classes

In C++ le eccezioni standard sono definite in classe che possiamo usare all'interno dei nostri programmi. La disposizione della gerarchia delle classi padre-figlio è illustrata di seguito:

![](https://static.javatpoint.com/cpp/images/cpp-exception-handling1.png)

Tutte le classi di eccezioni in C++ derivano dalla classe std::exception.

|Exception |Description|
|---|---|
|std::exception	| Si tratta di un'eccezione e di una classe padre di tutte le eccezioni C++ standard.|
|std::logic_failure	| Si tratta di un'eccezione che può essere rilevata leggendo un codice.|
|std::runtime_error	| Si tratta di un'eccezione che non può essere rilevata leggendo un codice.|
|std::bad_exception | Viene utilizzato per gestire le eccezioni impreviste in un programma c ++.|
|std::bad_cast |	Questa eccezione viene in genere generata da dynamic_cast.|
|std::bad_typeid |	Questa eccezione viene generalmente generata da typeid.|
|std::bad_alloc |	Questa eccezione viene generalmente generata danew.|

## C++ Exception Handling Keywords

In C++, usiamo 3 parole chiave per eseguire la gestione delle eccezioni:

- try
- catch, and
- throw

Inoltre, possiamo creare eccezioni definite dall'utente.

## C++ try/catch

Nella programmazione C++, la gestione delle eccezioni viene eseguita utilizzando l'istruzione try/catch. Il blocco try C++ viene utilizzato per inserire il codice che può verificarsi eccezione. Il blocco catch viene utilizzato per gestire l'eccezione.