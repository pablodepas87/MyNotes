# Introduction

CMake è uno strumento per gestire la creazione del codice sorgente. Originariamente, CMake è stato progettato come generatore per vari dialetti di Makefile , oggi CMake genera moderni buildsystem come Ninja e file di progetto per IDE come Visual Studio e Xcode.

CMake è ampiamente usato per i linguaggi C e C++,ma può essere usato anche per costruire il codice sorgente di altri linguaggi.

Le persone che incontrano CMake per la prima volta possono avere obiettivi iniziali diversi. Per sapere come creare un pacchetto di codice sorgente scaricato da Internet, inizia con la [User Interaction Guide](https://cmake.org/cmake/help/latest/guide/user-interaction/index.html#guide:User%20Interaction%20Guide) . Questo descriverà in dettaglio i passaggi necessari per eseguire l'eseguibile cmake(1) o cmake-gui(1) e come scegliere un generatore e come completare la build.

La [Using Dependencies Guide](https://cmake.org/cmake/help/latest/guide/using-dependencies/index.html#guide:Using%20Dependencies%20Guide) è rivolta agli sviluppatori che desiderano iniziare a utilizzare una libreria di terze parti.

Per gli sviluppatori che iniziano un progetto utilizzando CMake, il [CMake Tutorial](https://cmake.org/cmake/help/v3.24/guide/tutorial/index.html) è un punto di partenza adatto. Il manuale [cmake-buildsystem](https://cmake.org/cmake/help/latest/manual/cmake-buildsystem.7.html#manual:cmake-buildsystem(7)) è rivolto agli sviluppatori che espandono la loro conoscenza della manutenzione di un buildsystem e acquisiscono familiarità con i target di build che possono essere rappresentati in CMake. Il manuale [cmake-packages](https://cmake.org/cmake/help/latest/manual/cmake-packages.7.html#manual:cmake-packages(7)) spiega come creare pacchetti che possono essere facilmente utilizzati da sistemi di compilazione basati su CMake di terze parti.

