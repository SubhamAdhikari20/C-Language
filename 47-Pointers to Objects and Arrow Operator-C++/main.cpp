#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(){};

        Complex(int x, int y) : a(x), b(y){
            cout << "Complex Constructor is called" << endl;
        }

        void get_data(void){
            cout << "The real part is " << a << endl;
            cout << "The imaginary part is " << b << endl;
        }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    *ptr = Complex(5, 8);
    // (*ptr).get_data();    is same as
    ptr -> get_data();      // Arrow operator

    
    // Array of objects
    Complex *ptr1 = new Complex[4];

    *ptr1 = Complex(12, 16);
    // (*ptr).get_data();    is same as
    ptr1 -> get_data();      // Arrow operator
    
    return 0;
}

/*
The arrow operator (->) in C++ is used to access members of an object through a pointer. It is primarily used when you have a pointer to an object and need to access a member variable or invoke a member function on that object.

When you have a pointer to an object, you cannot directly use the dot operator (.) to access its members because the dot operator is used with actual objects, not pointers. Instead, you use the arrow operator to dereference the pointer and access the members of the pointed-to object.
*/