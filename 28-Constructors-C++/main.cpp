#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
    // Creation of a constructor
    // Constructor is a special member funtion having same name as the class which acts like a function but is used for initialization of the objects. It is automatiaclly invoked.
        complex(void);    // Constructor declaration

        void print_complex(void){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

complex :: complex(void){     // ----> default constructor as it takes no parameter
    a = 5;
    b = 2;
    // cout << "Hello world" << endl;
};

int main(){
    complex o1;
    o1.print_complex();
    return 0;
}


/*
  Properties/Characteristics of Constructor:
  1. It should be defined in public section of the class.
  2. It is invoked automatically for every object created.
  3. Return type is not specified (it doesnot have return type). 
  4. It can have default arguments.
  5. We cannot refer to there address.
*/
