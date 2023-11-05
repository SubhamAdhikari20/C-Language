#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    // Variables in C++
    // int a = 12;
    // cout << "The value of a was " << a << endl;
    // a = 6;
    // cout << "The value of a is " << a << endl;

    // Constant in C++
    // const int b = 5;
    // cout << "The value of b is " << b <<endl;
    // b = 6;      // will throw an error because it cannot be assigned twice
    // cout << "The value of b is " << b <<endl;

    // Manipulator in C++
    // int a = 2, b = 46, c = 788, d = 1234;
    // cout << "The value of a without setw is " << a << endl;
    // cout << "The value of b without setw is " << b << endl;
    // cout << "The value of c without setw is " << c << endl;
    // cout << "The value of d without setw is " << d << endl;
    // cout << "The value of a with setw is " << setw(4) << a << endl;
    // cout << "The value of b with setw is " << setw(4) << b << endl;
    // cout << "The value of c with setw is " << setw(4) << c << endl;
    // cout << "The value of d with setw is " << setw(4) << d << endl;

    // Operator Precedence
    int x = 25, y = 30, z = 45;
    cout << x*5+30-y+45-z;
    cout << (((((x*5)+30)-y)+45)-z);
    return 0;
}