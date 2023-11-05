#include <iostream>
using namespace std;

inline int product(int x, int y);   // ----> Function prototype

float return_on_investment(int money_invested, float interest_rates = 10.5){
    return money_invested * interest_rates;
};
// default arguments must be given at the extreme right or at the end whereas necessary arguments must be given at the beginning.
/*Ex: int c(int a, int b = 10) */

// Constant Argument : It is a indicator that indicates that the argumnet should be constant and should not be changed while excuting a function
/*Ex:
int strlen(const char *p);*/

int main(){
    // int a, b;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;
    // cout << "The product of a and b is " << product(a,b) << endl;

    int a;
    float b;
    cout << "Enter the money invested: ";
    cin >> a;
    // cout << "Enter the interest: ";
    // cin >> b;
    cout << "The return on investment is " << return_on_investment(a) << endl;   // b(interest) is taken as default
    cout << "The return on investment is " << return_on_investment(a, 15.77);    // default is overwritten
    return 0;
};
inline int product(int x, int y){    // ----> Actual Function
    int z = x*y;
    return z;   
};
// inline function is a request not a command so, It is up to compiler to decide whether to accept the request or not

// int product(int x, int y){    // ----> Actual Function
//     static int z = 0;   // ----> excutes only one time
//     // It is not good practice to use inline during static. 
//     z = z+1;   // ----> next time the function is executed, the value of z will be retained.
//     return x*y+z; 
// };

