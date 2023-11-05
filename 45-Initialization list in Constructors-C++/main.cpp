#include <iostream>
using namespace std;

/*
Initialization list in Constructors in C++
The initialization list in constructors is another concept of initializing the data members of the class. The syntax of the initialization list in constructors is shown below.

Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

Ex:
class Test{
    int a, b;
    public:
        Test(int x, int y) : a(x), b(y){        // where a = x, b = y;
            // code body
        }
};
*/

class Test{
    int a;      // First Declared
    int b;      // Second Declared
    public:
        Test(){};       // Default Constructor

        // Test(int x, int y) : a(x), b(y){        // Initialization list
        // Test(int x, int y) : a(x), b(x+y){        // Initialization list
        // Test(int x, int y) : a(x), b(5*y){        // Initialization list
        // Test(int x, int y) : a(x), b(a + y){        // Initialization list
        Test(int x, int y) : b(y), a(x + b){  // ----> Gives a garbadge value for "a" because "a" will be initialized first,then "b". Because "a" is declared first, then "b" .
            cout << "Constructor Executed" << endl;
        }

        void print_result(void){
            cout << "The value of 'a' of Test is " << a << endl; 
            cout << "The value of 'b' of Test is " << b << endl; 
        }
};

int main(){
    Test t1;
    t1 = Test(4,6);
    t1.print_result();
    return 0;
}