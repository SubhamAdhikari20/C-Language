#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(void){
            cout << "hajimemashite" << endl; 
        }
};

class Base2{
    public:
        void greet(void){
            cout << "Ohayogozaimasu" << endl; 
        }
};

class Base3{
    public:
        void greet(void){
            cout << "konichiwa" << endl; 
        }
};

class Derived : public Base1, public Base2, public Base3{
    int a;
    public:
        void greet(void){
            Base1 :: greet();         // Ambiguity Resolve
        }
};

class A{};

class B{
    public:
        void say(void){
            cout << "Common sense is not so common" << endl;
        }
};

class C{};

class D : public B{
    // "say()" method in B class will be overriden by the same "say()" method in D class. 
    public:
        void say(void){
            cout << "Live a life like no one else now so you can live a life like no one else later." << endl;
        }    
};

int main(){
    // Ambiguity 1
    // Base1 base1_obj;
    // base1_obj.greet();

    // Base2 base2_obj;
    // base2_obj.greet();

    // Base3 base3_obj;
    // base3_obj.greet();
    
    Derived derived_obj;
    derived_obj.greet();

    // Ambiguity 2
    B b1;
    b1.say();

    D d1;
    d1.say();

    return 0;
}