# C++ Expression

L'espressione C++ è costituita da operatori, costanti e variabili disposte secondo le regole del linguaggio. Può anche contenere chiamate di funzione che restituiscono valori. Un'espressione può essere costituita da uno o più operandi, zero o più operatori per calcolare un valore. Ogni espressione produce un valore che viene assegnato alla variabile con l'aiuto di un operatore di assegnazione.

### Examples of C++ expression:

    (a+b) - c  
    (x/y) -z  
    4a2 - 5b +c  
    (a+b) * (x+y)  

## An expression can be of following types:

- Constant expressions
- Integral expressions
- Float expressions
- Pointer expressions
- Relational expressions
- Logical expressions
- Bitwise expressions
- Special assignment expressions

![](https://static.javatpoint.com/cpp/images/cpp-expression.png)

Se l'espressione è una combinazione delle espressioni precedenti, tali espressioni sono note come espressioni composte.

## Constant expressions

Un'espressione costante è un'espressione costituita solo da valori costanti. Si tratta di un'espressione il cui valore viene determinato in fase di compilazione ma valutato in fase di esecuzione. Può essere composto da costanti intere, carattere, virgola mobile ed enumerazione.

Le costanti vengono utilizzate nelle situazioni seguenti: 

- Viene utilizzato nel dichiarante pedice per descrivere il limite della matrice. - Viene utilizzato dopo la parola chiave case nell'istruzione switch. 
- Viene utilizzato come valore numerico in un **enum** 
- Specifica una larghezza del campo di bit. 
- Viene utilizzato nel pre-processore #if

Negli scenari precedenti, l'espressione costante può avere costanti di numero intero, carattere ed enumerazione. Possiamo usare la parola chiave static ed extern con le costanti per definire la function-scope.

|Expression containing constant |	Constant value |
|---|---|
|x = (2/3) * 4 | (2/3) * 4|
|extern int y = 67 | 67 |
|int z = 43 | 43 |
|static int a = 56 | 56 |

## Integral Expressions

Un'espressione intera è un'espressione che produce il valore intero come output dopo aver eseguito tutte le conversioni esplicite e implicite.

Di seguito un esempio di espressioni intere:

    (x * y) -5        
    x + int(9.0)  
    where x and y are the integers.  


    int main()  
    {  
        int x;  // variable declaration.  
        int y;  // variable declaration  
        int z;  // variable declaration  
        cout<<"Enter the values of x and y";  
        cin>>x>>y;  
        z=x+y;  
        cout<<"\n"<<"Value of z is :"<<z; //  displaying the value of z.  
        return 0;  
    }  

## Float Expressions    

Un'espressione float è un'espressione che produce un valore a virgola mobile come output dopo aver eseguito tutte le conversioni esplicite e implicite.

The following are the examples of float expressions:

    x+y  
    (x/10) + y  
    34.5  
    x+float(10) 

    {  
    float x=6.7;    // variable initialization  
    float y;      // variable declaration  
    y=x+float(10);   // float expression  
    std::cout <<"value of y is :"  << y<<std::endl;  // displaying the value of y  
    return 0;  
    }     

## Pointer Expressions

Un'espressione puntatore è un'espressione che produce un valore di indirizzo come output.

The following are the examples of pointer expression:

    &x  
    ptr  
    ptr++  
    ptr- 

    {  
      
    int a[]={1,2,3,4,5};  // array initialization  
    int *ptr;       // pointer declaration  
    ptr=a;    // assigning base address of array to the pointer ptr  
    ptr=ptr+1;   // incrementing the value of pointer  
    std::cout <<"value of second element of an array : "  << *ptr<<std::endl;  
    return 0;  
    }    

## Relational Expressions

Un'espressione relazionale è un'espressione che produce un valore di tipo bool, che può essere vero o falso. È anche noto come espressione booleana. Quando le espressioni aritmetiche vengono utilizzate su entrambi i lati dell'operatore relazionale, le espressioni aritmetiche vengono prima valutate e quindi i loro risultati vengono confrontati.

The following are the examples of the relational expression:

    a>b  
    a-b >= x-y  
    a+b>80  

# Logical Expressions    

Un'espressione logica è un'espressione che combina due o più espressioni relazionali e produce un valore di tipo bool. Gli operatori logici sono '&&' e '||' che combinano due o più espressioni relazionali.

The following are some examples of logical expressions:

    a>b && x>y  
    a>10 || b==5  


For example:

x=3

x>>3 // This statement means that we are shifting the three-bit position to the right.

![](https://static.javatpoint.com/cpp/images/cpp-expression2.png)

    {  
    int x=7;   // variable declaration  
    std::cout << (x<<3) << std::endl;  
    return 0;  
    }  

## Special Assignment Expressions

Le espressioni di assegnazione speciale sono le espressioni che possono essere ulteriormente classificate in base al valore assegnato alla variabile.

#### Chained Assignment

L'espressione di assegnazione concatenata è un'espressione in cui lo stesso valore viene assegnato a più variabili utilizzando un'istruzione singola.

    a=b=20;
    (a=b) = 20;

#### Embedded Assignment Expression

Un'espressione di assegnazione incorporata è un'espressione di assegnazione in cui l'espressione di assegnazione è racchiusa all'interno di un'altra espressione di assegnazione.

    a=10+(b=90);

#### Compound Assignment

Un'espressione di assegnazione composta è un'espressione che è una combinazione di un operatore di assegnazione e di un operatore binario.

    a+=10;   

'a' is a variable and '+=' is a compound statement.  

    {  
    int a=10;   // variable declaration  
    a+=10;    // compound assignment  
    std::cout << "Value of a is :" <<a<< std::endl; // displaying the value of a.  
    return 0;  
    }  