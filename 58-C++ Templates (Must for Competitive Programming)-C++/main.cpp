#include <iostream>
using namespace std;

template <class T>
class Vector{
    T arr;
    public:
        Vector(){};
        Vector(T a){
            arr = a;
            cout << "The Constructor is called" << endl;
        }

        void print_value(void){
            cout << "The value of arr is " << arr << endl;
        }
};

int main(){
    Vector <int> v1(45);
    v1.print_value();
    
    Vector <float> v2(88.854);
    v2.print_value();
    
    Vector <char> v3('f');
    v3.print_value();
    return 0;
}

/*
Template:
    A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types. Declaring classes for every other data type(which if counted is way too much) in the very first place violates the DRY( Don’t Repeat Yourself) rule of programming and on the other doesn't completely utilise the potential of C++.
*/