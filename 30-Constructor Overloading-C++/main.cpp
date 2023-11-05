#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(){                     // Declaring default construtor
            a = 0;
            b = 0;
        }

        complex(int x, int y){          // Declaring parameterized construtor
            a = x;
            b = y;
        }

        complex(int x){                 // constructor overloading 
            a = x;
            b = 0;
        }

        void print_complex(void){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

int main(){
    complex c1 = complex(4, 8);
    c1.print_complex();
    
    complex c2 = complex(5);
    c2.print_complex();
    
    // complex c3;
    complex c3 = complex();
    c3.print_complex();
    return 0;
}

/*
1. Overloaded constructors have the same name (name of the class) but the different number of arguments. 
2. Depending upon the number and type of arguments passed, the corresponding constructor is called.
*/