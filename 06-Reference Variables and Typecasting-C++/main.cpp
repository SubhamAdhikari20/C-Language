#include <iostream>
using namespace std;

int sum = 50;
int main(){
    // ***************** Build-in Data Types *****************
    // int a, b, sum;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;
    // sum = a+b;
    // cout << "The value of sum is " << sum << endl;
    // cout << "The global value of sum is " << ::sum;   // "::" is the scope resolution operator that indicates global variable declared outside of the scope

    // **************** float, double, and long double Literals ****************
    // float d = 13.7f;
    // long double e = 13.7l;
    // cout << "The value of d is " << d << endl;
    // cout << "The value of e is " << e << endl;
    // cout << "The size of 13.7 is " << sizeof(13.7) << endl;
    // cout << "The size of 13.7f is " << sizeof(13.7f) << endl;
    // cout << "The size of 13.7F is " << sizeof(13.7F) << endl;
    // cout << "The size of 13.7l is " << sizeof(13.7l) << endl;
    // cout << "The size of 13.7L is " << sizeof(13.7L) << endl;

    // **************** Reference Variables ****************
    // int x = 45;
    // int &y = x;
    // cout << "The value of x is " << x << endl;
    // cout << "The value of y is " << y;

    // **************** Typecasting ****************
    int a = 77;
    float b = 67.6;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;
    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);
    cout << "The value of c is " << c << endl << endl;
    cout << "Expression";
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a + (int)b is " << a + (int)b << endl;
    cout << "The value of a + int(b) is " << a + int(b) << endl;
    return 0;
}
