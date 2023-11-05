#include <iostream>
using namespace std;

class number{
    int n;
    public:

        number(){ 
            n = 0;
        };
        
        number(int num){
            n = num;
        }

        // When complier does not find copy constructor, it creates and provides its own copy constructor - default copy constuctors.  
        // number(number &obj){
        //     cout << "Copy Constructor" << endl;
        //     n = obj.n;
        // }

        void display_num(void){
            cout << "The number is " << n << endl;
        }
};

int main(){
    int a;
    cout << "Enter the value of a: ";
    cin >> a; 
    number n1(a), n2(707), n3, ob2;
    n1.display_num();
    n2.display_num();
    n3.display_num();

    number ob1(n1);    // copy constructor is invoked.
    ob1.display_num();

    // number ob2;      
    ob2 = n2;          // copy constructor is not invoked. We are justing assign the value to the already created obj which is "ob2".
    ob2.display_num();

    number ob3 = n1;   // copy constructor is invoked.
    ob3.display_num();

    return 0;
}

// The copy constructor in C++ is used to copy data of one object to another.
// A copy constructor is a member function that initializes an object using another object of the same class.