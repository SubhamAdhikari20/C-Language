#include <iostream>
using namespace std;

/*
Constructor execution/call order in inheritance:

Case 1:
class B : public A{
    // Order of execution of constructor ----> First: A()    Then: B()
    // Because ----> base class > derived class
};

Case 2:
class C : public A, public B{
    // Order of execution of constructor ----> First: A()    Second: B()    Then: C()
    // Because ----> base class (in-order) > derived class
};

Case 3:
class C : public A, virtual public B{
    // Order of execution of constructor ----> First: B()    Second: A()    Then: C()
    // Because ----> virtual base class > non-virtual base class > derived class
};
*/

class Base1{
    int data1;
    public:
        Base1(){};      // Default Constructor Declaration

        Base1(int i){
            data1 = i;
            cout << "The constructor of the Base1 Class is called." << endl;
        }

        void print_value(void){
            cout << "The value of the data1 is " << data1 << endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(){};      // Default Constructor Declaration

        Base2(int i){
            data2 = i;
            cout << "The constructor of the Base2 Class is called." << endl;
        }

        void print_value(void){
            cout << "The value of the data2 is " << data2 << endl;
        }
};

class Derived : public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(){};        // Default Constructor Declaration

        Derived(int a, int b, int c, int d) : Base1(b), Base2(a){
            derived1 = c;
            derived2 = d;
            cout << "The constructor of the Derived Class is called." << endl;
        }

        void print_value(void){
            Base1 :: print_value();     // Ambiguity Resolve
            Base2 :: print_value();     // Ambiguity Resolve
            cout << "The value of the derived 1 is " << derived1 << endl;
            cout << "The value of the derived 2 is " << derived2 << endl;
        }
};

int main(){
    Derived d1;
    d1 = Derived(12, 14, 16, 18);
    d1.print_value();
    return 0;
}