#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;     
};

// Call by value - normal usecase
// This will not swap
void swap(int a, int b){         //  x   a    b
    int x = a;                   //  10  10   15
    a = b;                       //  10  15   15
    b = x;                       //  10  15   10
    // cout << "The value of a is " << a << ". The value of b is " << b << ". And the value of x is " << endl;
};

// Call by Reference- using pointers
void swap_pointer(int* a, int* b){         //  x   a    b
    int z = *a;                             //  10  10   15
    *a = *b;                                 //  10  15   15
    *b = z;                                 //  10  15   10
    // cout << "The value of a is " << a << ". The value of b is " << b << ". And the value of x is " << endl;
};
// Call by Reference- using reference variables
void swap_reference_var(int &a, int &b){         //  x   a    b
    int z = a;                             //  10  10   15
    a = b;                                 //  10  15   15
    b = z;                                 //  10  15   10
    // cout << "The value of a is " << a << ". The value of b is " << b << ". And the value of x is " << endl;
};
// Return by Reference
int &swap_return_reference(int &a, int &b){         //  x   a    b
    int z = a;                             //  10  10   15
    a = b;                                 //  10  15   15
    b = z;                                 //  10  15   10
    // return a;
    return b;
};

int main(){
    int x = 10, y = 15;
    // cout << "The sum of a and b is " << sum(a, b) << endl;
    cout << "The value of x is " << x << ". The value of y is " << y << endl;
    // swap(x,y);                   // This will not swap
    // swap_pointer(&x,&y);         // This will swap
    // swap_reference_var(x,y);     // This will swap
    swap_return_reference(x,y) = 777;
    cout << "The value of x is " << x << ". The value of y is " << y << endl;

    return 0;
};