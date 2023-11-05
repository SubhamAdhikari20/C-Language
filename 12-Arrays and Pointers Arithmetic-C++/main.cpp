#include <iostream>
using namespace std;

int main(){
    /*
    int a[] = {23,45,56};
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    int marks[5];
    marks[0] = 77;
    marks[1] = 222;
    marks[2] = 144;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    // accessing elements of array through for loop
    cout << "accessing elements of array through for loop" << endl;
    int b[] = {2,4,6,8,10,12,14};
    for (int i = 0; i < 7; i++){
        cout << "The each elements of b is " << b[i] << endl;
    }
    
    // accessing elements of array through for loop
    cout << "accessing elements of array through while loop" << endl;
    int c[] = {16,18,20,22,24,26,28};
    int x = 0;
    while (x < 7){
        cout << "The each elements of c is " << c[x] << endl;
        x++;
    }
    // accessing elements of array through for loop
    cout << "accessing elements of array through do while loop" << endl;
    int d[] = {30,32,34,36,38,40,42};
    int y = 0;
    do{
        cout << "The each elements of d is " << d[y] << endl;
        y++;
    }while (y < 7); */
    

    // Pointer Arrays
    int marks_p[] = {85,75,95,65,90,60,100};
    int* p = marks_p;
    // cout << marks << endl;
    // cout << &marks << endl;
    
    // For "p+n"
    cout << "For 'p+n'" << endl;
    cout << p << " ----> " << *p << endl;
    cout << p+1 << " ----> " << *(p+1) << endl;
    cout << p+2 << " ----> " << *(p+2) << endl;
    cout << p+3 << " ----> " << *(p+3) << endl << endl;
    
    int marks_q[] = {85,75,95,65,90,60,100};
    int* q = marks_q;
    // For "p++"
    cout << "For 'q++'" << endl;
    cout << q << " ----> " << *q << endl;
    cout << q++ << " ----> " << *(q++) << endl;     
    cout << q++ << " ----> " << *(q++) << endl;
    cout << q++ << " ----> " << *(q++) << endl << endl;
    
    int marks_r[] = {85,75,95,65,90,60,100};
    int* r = marks_r;
    // For "++p"
    cout << "For ++r" << endl;
    cout << r << "---->" << *r << endl;             // r[0] = 85
    cout << ++r << "---->" << *(++r) << endl;       // r[1] = 75      
    cout << ++r << "---->" << *(++r) << endl;       // r[2] = 95
    cout << ++r << "---->" << *(++r) << endl;       // r[3] = 85
    
    return 0;
}