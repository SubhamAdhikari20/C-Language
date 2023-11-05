#include<iostream>
using namespace std;

int main()
{
    short int num1, num2;       // Declaring the variables
    cout << "Enter the value of num1: ";           // "<<" is called insertion operator because it inserts the characters into a stream.
    cin >> num1;              // ">>" is called an extraction operator because it extracts characters from a stream.
    cout << "Enter the value of num2: ";
    cin >> num2; 
    cout << "The sum of num1 and num2 is: "
         << num1 + num2;
    return 0;
}


