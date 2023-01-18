/*
  Constants are expressions with a fixed value.

  constants Literals: are the most obvious kind of constants.
    They are used to express particular values within the source code of a program
    Literal constants can be classified into: integer, floating-point, characters, strings, Boolean, pointers, and user-defined literals.
    
    ex: x = 5;

    they are not enclosed in quotes or any other special character; they are a simple succession of digits representing a whole number in decimal base;
    In addition to decimal numbers (those that most of us use every day), C++ allows the use of octal numbers (base 8) and hexadecimal numbers (base 16) as literal constants
    For octal literals, the digits are preceded with a 0 (zero) character. And for hexadecimal, they are preceded by the characters 0x (zero, x).
    
    75         // decimal
    0113       // octal
    0x4b       // hexadecimal

    Suffix	Type modifier
    u or U	unsigned
    l or L	long
    ll or LL	long long

    75         // int
    75u        // unsigned int
    75l        // long
    75ul       // unsigned long 
    75lu       // unsigned long


    constant expressions

        Sometimes, it is just convenient to give a name to a constant value:

        const double pi = 3.1415926;
        const char tab = '\t';

    Preprocessor definitions (#define)

        Another mechanism to name constant values is the use of preprocessor definitions. They have the following form:

            #define identifier replacement
        
        After this directive, any occurrence of identifier in the code is interpreted as replacement, where replacement is any sequence of characters (until the end of the line). 
        This replacement is performed by the preprocessor, and happens before the program is compiled, this causing a sort of blind replacement: the validity of the types or syntax involved is not checked in any way.

        Note that the #define lines are preprocessor directives, and as such are single-line instructions that -unlike C++ statements- do not require semicolons (;) at the end
*/


#include <iostream>

#define PI 3.14159
#define NEWLINE '\n'

using namespace std;
const double pi= 3.14159;    // constant expression
const char newline = '\n';  // constant expression

int main (int argc , char *argv[]){
    double r = 5.0;
    double circle;
    double circle2;

    circle = 2 * pi * r;
    circle2 = 2* PI * r; 
   
    cout << circle ;
    cout << newline;

    cout << "Circle 2:" << circle2 << NEWLINE;

}