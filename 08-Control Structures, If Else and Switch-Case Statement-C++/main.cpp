#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    // Selecton Control Structure:
    
    // If-Else and If-Else Ladder Statement:
    // if (age >= 18){
    //     cout << "You can drive";
    // }
    // else {
    //     cout << "You cannot drive";
    // }

    // Switch-Case Statement:
    switch (age){
        case 15:
            cout << "You cannot drive" << endl;
            break;
        case 16:
            cout << "You cannot drive" << endl;
            break;
        case 17:
            cout << "You cannot drive" << endl;
            break;
        case 18:
            cout << "You can drive" << endl;
            break;
        case 19:
            cout << "You can drive" << endl;
            break;
        case 20:
            cout << "You can drive" << endl;
            break;
        default:
            cout << "It is over";
            break;    
    }
    return 0;
}