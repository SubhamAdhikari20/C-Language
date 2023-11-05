#include <iostream>
using namespace std;

int main(){
    /* Pointer----> Variable Data Type That holds the address of the other data type
    OR,
    A pointer is a variable that stores the memory address of an object.*/
    // Ex:
    int a = 7;
    int* b = &a;   
    // & ----> (address of) operater
    cout << "The address of a is "<< &a << endl; 
    cout << "The address of a is "<< b << endl; 

    // * ---->(value at) dereference operator
    cout << "The value at address of b is "<< *b << endl;

    // Pointer to pointer
    // Ex:
    int** c = &b;
    cout << "The address of b is "<< c << endl;
    cout << "The value at address of c is " << *c << endl;
    cout << "The value at address of c is " << **c << endl;
    return 0;
    
    // int*** d = &c;
    // cout << d;
    // cout << "The address of c is "<< d << endl;
    // cout << "The value at address of d is " << ***d << endl;
    return 0;
}