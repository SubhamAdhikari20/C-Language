#include<iostream>
using namespace std;
int g = 7;
void sum(){
    int l = 12;
    cout << g
         << l;
}
int main(){
    int g = 14;
        g = 28;
    int a = 56, b = 45;
    float pie = 3.14;
    // cout << "Variable Scope and Data Types"
    //      << "\n"
    //      << "The sum of a and b is " << a + b
    //      << "\n"
    //      << "The value of pie is " << pie;
    cout << g;
        //  << l;
    sum();    
    return 0;
}