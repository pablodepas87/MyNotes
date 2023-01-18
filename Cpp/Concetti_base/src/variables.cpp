/* tipologia variabili  possiamo definire una variabile come una porzione di memoria per memorizzare/conservare/salvare un valore.

identifier (noe variabile) : A valid identifier is a sequence of one or more letters, digits, or underscore characters (_). 
   Spaces, punctuation marks, and symbols cannot be part of an identifier.In addition, identifiers shall always begin with a letter.
   They can also begin with an underline character (_), but such identifiers are -on most cases- considered reserved for compiler-specific keywords or external identifiers, as well as identifiers containing two successive underscore characters anywhere.
   In no case can they begin with a digit.

   int Pippo;        //corretta
   int pluto;        // corretta 
   float _minny;     // corretta ma ad evitare
   float 123Stella;  // errata inizia con numero

C++ uses a number of keywords to identify operations and data descriptions; therefore, identifiers created by a programmer cannot match these keywords. 
The standard reserved keywords that cannot be used for programmer created identifiers are:

   alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, 
   compl, const, constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, 
   export, extern, false, float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr, 
   operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, short, signed, sizeof, static, static_assert, static_cast, 
   struct, switch, template, this, thread_local, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, 
   while, xor, xor_eq

Very important: The C++ language is a "case sensitive" language. That means that an identifier written in capital letters is not equivalent to another one with the same name but written in small letters. 
   
   example, RESULT != result != Result variable. These are three different identifiers identifiying three different variables.

Character types: They can represent a single character, such as 'A' or '$'. 
	The most basic type is char, which is a one-byte character. Other types are also provided for wider characters.

Numerical integer types: They can store a whole number value, such as 7 or 1024. 
	They exist in a variety of sizes, and can either be signed or unsigned, depending on whether they support negative values or not.

Floating-point types: They can represent real values, such as 3.14 or 0.01, 
	with different levels of precision, depending on which of the three floating-point types is used.

Boolean type: The boolean type, known in C++ as bool, can only represent one of two states, true or false.

*/

/* inizializzazione variabili

	In C++, there are three ways to initialize variables. They are all equivalent and are reminiscent of the evolution of the language over the years:

	The first one, known as c-like initialization (because it is inherited from the C language), 
	consists of appending an equal sign followed by the value to which the variable is initialized:

		type identifier = initial_value;   ex : int x = 3; 

	A second method, known as constructor initialization (introduced by the C++ language), encloses the initial value between parentheses (()):	
    
		type identifier (initial_value);   ex:  int x (0);

	Finally, a third method, known as uniform initialization, similar to the above, but using curly braces ({}) instead of parentheses 
	   
	   type identifier {initial_value};   ex:  int x {0};

   Type deduction: auto and decltype

   When a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the initializer. 
   For this, it suffices to use auto as the type specifier for the variable:

   int foo = 0;
   auto bar = foo; 

   Qui, la bar è dichiarata come tipo auto; Pertanto, il tipo di bar è il tipo del valore utilizzato per inizializzarlo: in questo caso utilizza il tipo di foo, che è int.
*/
#include <iostream>
using namespace std;


void tipi_inizializzazione();

int main (int argc , char *argv[]){

    // dichiarazione variabili
	int a,b;
	int result;
     
	// processare una variabile 
	a = 5;
	b = 2;
	a = a + 1;

	result = a - b ;

	cout << "risultato:" << result;  

	tipi_inizializzazione();
	     
	return 0;
}

void tipi_inizializzazione(){
	int a = 5;  // c-like initialization
	int pippo(2); // constructor initialization
	int pluto {6}; // uniform initialization
   int result;

	a = a + pippo;
	result = a - pluto;

	cout << "\ntipi di inizializzazione:" << result;
}