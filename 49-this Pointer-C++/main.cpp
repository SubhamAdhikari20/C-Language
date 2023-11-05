#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A & set_data(int a){
            this -> a = a;
            return *this;
        }

        void print_data(void){
            cout << "The value of a is " << a << endl;
        }
};

int main(){
    A a;
    a.set_data(5).print_data();
    a.print_data();
    return 0;
}

/*
"this" keyword is a pointer that points to the object of the class which member function is called.
*/