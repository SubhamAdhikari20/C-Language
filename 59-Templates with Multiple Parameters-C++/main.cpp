#include <iostream>
using namespace std;

/*
Multiple datatypes in classes through templates:
OR
Class Templates with multiple parameters
syntax:

tempalte <class T1, class T2>   ---->  // Comma Separated
class Name{};
*/

template <class T1, class T2>

class Employee{
    public:
        T1 value1;
        T2 value2;
    Employee(T1 a, T2 b){
        value1 = a;
        value2 = b;
    }
    void display(void){
        cout << "The value1 is " << this -> value1 << endl << "The value2 is " << this -> value2 << endl;
    }    
};

int main(){
    Employee <int, char> e1(4, 'd');
    e1.display();
    return 0;
}