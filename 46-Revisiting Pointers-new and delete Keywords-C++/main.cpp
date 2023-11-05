#include <iostream>
using namespace std;

/*
In C++, the "new" keyword is used for dynamic memory allocation. It is used to allocate memory for objects or variables on the heap, rather than the stack, which allows for more flexible memory management.
*/

int main(){
    int a = 5;
    int* b = &a;
    *(b + 1) = 12;
    // int **c = &b;
    cout << "The address of a is " << b << endl;
    cout << "The value at a is " << *b << endl;
    cout << "The value at a is " << *(b + 1) << endl;
    // cout << "The address of c is " << c << endl;
    // cout << "The value at c is " << **c << endl;

    // system("cls");
    // new keyword
    int* d = new int(77);
    cout << "The value at address d is " << d << endl;

    int* arr = new int[5];
    arr[0] = 2;
    // arr[1] = 4;
    *(arr + 1) = 4;
    arr[2] = 6;
    arr[3] = 8;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;

    // delete keyword
    return 0;
}