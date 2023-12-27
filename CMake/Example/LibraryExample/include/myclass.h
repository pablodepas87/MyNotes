#ifndef MYCLASS_H
#define MYCLASS_H

namespace simpleLibraryEx {

class Myclass
{
   public:
        myclass(/* args */);  // COSTRUTTO
        ~myclass();           // DISTRUTTORE
        
        void printMessage();
   private:

    int mynumber;     
};

}
#endif ## MYCLASS_H