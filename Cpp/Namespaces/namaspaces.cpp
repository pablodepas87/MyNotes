/*
	C++ Namespaces

	Gli spazi dei nomi in C++ vengono utilizzati per organizzare troppe classi in modo che possa essere facile gestire l'applicazione.

    Per accedere alla classe di uno spazio dei nomi, dobbiamo usare NamespaceName::ClassName. 
	Possiamo usare la parola chiave in modo da non dover usare sempre il nome completo.

	In C++, lo spazio dei nomi globale è lo spazio dei nomi radice. Il global::std farà sempre riferimento allo spazio dei nomi "std" di C++ Framework.

*/

#include <iostream>
using namespace std;

namespace First {
	float y= 5.4;
	void SayHello() {
		cout << "Hello Friends!!" << endl;
	}
}

namespace Second {
	int i = 5;
	void SayHello() {
		cout << "Hello i'm second namespace " << endl;
	}
}

namespace Third {
	void thirdSayHello() {
		cout << "Hello i'm third namespace " << endl;
	}
}

using namespace Third;

int main(int argc, char *argv[])
{
	First::SayHello();
	Second::SayHello();  // richiamiamo in questo modo perchè non ho usato using namespace come std
	cout << "Hello world!" << endl;
	thirdSayHello();     // nn ho bisogno dell'operatore di scope xchè ho usato using namespace
}