#include <iostream>
using namespace std;

// Structure: are user defined data type to store different type of variables in same location.
// struct employee{
//     int id;
//     char favchar;
//     float salary;
// };
typedef struct employee{
    int id;
    char favchar;
    float salary;
} ep;
    
    // Union:
    // Unions are a special data type provided in C++ that allow for multiple data types to be stored in the same location.
union money{
    int rice;
    char car;
    float dollar;
};

int main(){
    // struct employee subham;
    
    // ep subham;
    // subham.id = 12;
    // subham.favchar = 'c';
    // subham.salary = 50000000;
    // cout << subham.id << endl;
    // cout << subham.favchar << endl;
    // cout << subham.salary << endl;

    // union money m1;
    // m1.rice = 20;
    // m1.car = 'd';
    // m1.dollar = 50.5;
    // cout << m1.rice << endl;
    // cout << m1.car << endl;
    // cout << m1.dollar << endl;

    enum food {breakfast = 5, launch, dinner};
    food a = breakfast;
    cout << a << endl; 
    cout << (a==1) << endl; 
    cout << launch << endl;
    cout << dinner << endl;
    return 0;
}