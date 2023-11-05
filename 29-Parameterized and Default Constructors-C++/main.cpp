#include <iostream>
using namespace std;

// This is an example of a Default Constructor
/*
class complex{
    int a, b;
    public:
        complex(void);    // Constructor declaration

        void print_complex(void){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

complex :: complex(void){     // ----> default constructor as it takes no parameter
    a = 0;      // default value
    b = 0;      // default value
    // cout << "Hello world" << endl;
};

int main(){
    complex o1;
    o1.print_complex();
    return 0;
}
*/

// This is an example of a Parameterized Constructor
class complex{
    int a, b;
    public:
        complex(int x, int y);    // Constructor declaration

        void print_complex(void){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

complex :: complex(int x, int y){     // ----> parameterized constructor as it takes parameters
    a = x;
    b = y;
    // cout << "Hello world" << endl;
};

int main(){
    // Implicit call
    complex o1(5,2);      
    o1.print_complex();

    // Explicit call
    complex o2 = complex(7, 8);
    o2.print_complex();
    return 0;
}