#include <iostream>
using namespace std;
/*
int sum(int a, int b){
    int c = a+b;
    return c;
};

int main(){
    int num1,num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;
    cout << "The sum of num1 and num2 is " << sum(num1,num2);
    return 0;
}
*/
// Function Prototype : Provides assurity that function exist in the program
// int sum(int a, int b); ----> Acceptable
// int sum(int a, b); ----> Unacceptable
// int sum(int , int); ----> Acceptable
// -type- -function_name-(arguments)  :
int sum(int a, int b);
void g(void);
// void g(); ----> Acceptable

int main(){
    int num1,num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;
    cout << "The sum of num1 and num2 is " << sum(num1,num2) << endl;
    g();
    return 0;
    // Here, num1 and num2 are actual parameters because they hold values which then passed to formal parameters when excuting a function
};


int sum(int a, int b){
    int c = a+b;
    return c;
    // Here a and b are formal parameters because they accept or take value from actual parameter when excuting a function.
};

void g(){
    cout << "Hello World";
};