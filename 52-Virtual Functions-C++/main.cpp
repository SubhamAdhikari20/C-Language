#include <iostream>
using namespace std;

class Base{
    public:
        int value_base;
        virtual void display(){
            cout << "The value of value_base is " << value_base << endl;
        }
};

class Derived : public Base{
    public:
        int value_derived;
        void display(){
            cout << "The value of value_base is " << value_base << endl;
            cout << "The value of value_derived is " << value_derived << endl;
        }
};

int main(){
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer -> value_base = 7;
    obj_derived.value_derived = 8;
    base_class_pointer -> display();        // after "virtual keyword is added", the "display" function of "Derived" Class is invoked 
    return 0;
}