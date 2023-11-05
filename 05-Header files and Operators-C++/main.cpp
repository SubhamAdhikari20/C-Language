#include<iostream>
/* There are two types of header files:
1. System Header Files: It comes with the compiler
   Ex: #include<iostream>
2. User Defined Header Files: It is written/defined by the programmer
   Ex: #include"subham.cpp" ---> This will throw error if "subham.cpp" file is not present in the current directory
*/
using namespace std;

int main(){
   cout << "Operators in C++"
        << endl        // New line. Same as "\n"
        << "Types of Operators: "
        << endl;
   //   Arithmetic Operators --> Used to do some arithmetic operations
   cout << "Arithematic Operators" << endl;
   int a=10, b=5;
   // int a, b;
   // cout << "Enter the value of a: ";
   // cin >> a;
   // cout << "Enter the value of b: ";
   // cin >> b;
   cout 
        << "The value of a + b is "
        << a + b
        << endl
        << "The value of a - b is "
        << a - b
        << endl
        << "The value of a * b is "
        << a * b
        << endl
        << "The value of a / b is "
        << a / b
        << endl
        << "The value of a % b is "
        << a % b
        << endl
        << "The value of a++ is " << a++ << endl
        << "The value of a-- is " << a-- << endl
        << "The value of ++a is " << ++a << endl
        << "The value of --a is " << --a << endl << endl;
   
   // Assignment Operators --> Used to assign value to the variables
   int c = 10, d = 20;
   char e = 'd';

   // Comparison Operators --> Used to compare values or situation 
   cout << "Comparison Operators" << endl;
   cout << "The value of a == b is " << (a == b) << endl
        << "The value of a != b is " << (a != b) << endl
        << "The value of a > b is " << (a > b) << endl
        << "The value of a < b is " << (a < b) << endl
        << "The value of a >= b is " << (a >= b) << endl
        << "The value of a <= b is " << (a <= b) << endl << endl;
   
   // Logical Operators --> Used to compare values or situation 
   // int a=10, b=5;
   cout << "Logical Operators" << endl;
   cout << "The value of ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl
        << "The value of ((a != b) && (a < b)) is " << ((a != b) && (a < b)) << endl
        << "The value of ((a > b) && (a != b)) is " << ((a > b) && (a != b)) << endl
        << "The value of ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl
        << "The value of ((a != b) || (a < b)) is " << ((a != b) || (a < b)) << endl
        << "The value of ((a > b) || (a != b)) is " << ((a > b) || (a != b)) << endl
        << "The value of (!(a < b) is " << (!(a < b)) << endl << endl;
    return 0;
}
