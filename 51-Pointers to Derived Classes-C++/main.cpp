#include <iostream>
using namespace std;

class Base{
    public:
        int value_base;
        void display(){
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
    Base *base_class_pointer;   // points to the object of "Base" class
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;  // points to the object of "Derived" class
    base_class_pointer -> value_base = 10;  // accessing the member of "Base" class
    // base_class_pointer -> value_derived = 8;     // Throws error
    base_class_pointer -> display();    // executes the "display()" function of the "Base" class because the pointer belongs to the "Base" class regardless of it(pointer) pointing the object of "Derived" class

    Derived *derived_class_pointer;     // points to the object of "Derived" class
    derived_class_pointer = &obj_derived;   // points to the object of "Derived" class
    derived_class_pointer -> value_base = 12;  // accessing the member of "Base" class because its the members are inherited by the "Derived" class
    derived_class_pointer -> value_derived = 707;  // accessing the member of "Derived" class
    derived_class_pointer -> display();     // executes the "display()" function of the "Derived" class because the pointer belongs to the "Derived".
    return 0;
}

