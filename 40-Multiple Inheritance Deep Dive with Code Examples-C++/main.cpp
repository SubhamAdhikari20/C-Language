#include <iostream>
using namespace std;

/*
Syntax of Multiple Inheritance
class DerivedC : visibility-mode  Base1, visibility-mode  Base2
{
    // body of class "DerivedC"
};
*/

class Base1{
    protected:
        int base1_int;
    public:
        void set_base1_int(int);
};

void Base1 :: set_base1_int(int a){
    base1_int = a;
}


class Base2{
    protected:
        int base2_int;
    public:
        void set_base2_int(int);  
};

void Base2 :: set_base2_int(int b){
    base2_int = b;
}


class Base3{
    protected:
        int base3_int;
    public:
        void set_base3_int(int);  
};

void Base3 :: set_base3_int(int b){
    base3_int = b;
}


class Derived : public Base1, public Base2, public Base3{
    public:
        void display_int(void){
            cout << "The value of integer of Base1 is " << base1_int << endl;
            cout << "The value of integer of Base2 is " << base2_int << endl;
            cout << "The value of integer of Base3 is " << base3_int << endl;
            cout << "The sum of value of integers of Base1, Base2 and Base3 is " << base1_int + base2_int + base3_int << endl;
        }
};

/*
The inherited derived class will something like this:
Data Members:
    1. base1_int ----> protected
    2. base2_int ----> protected
    3. base3_int ----> protected
Member Functions:
    3. set_base1_int(int) ----> public
    4. set_base2_int(int) ----> public
    5. set_base3_int(int) ----> public
    6. display_int(void) ----> public

Ex:
class Derived : public Base1, public Base2{
    protected:
        int base1_int;
        int base2_int;
    public:
        void set_base1_int(int a){
            base1_int = a;
        }    

        void set_base2_int(int a){
            base2_int = a;
        }   

        void display_int(void){
            cout << "The value of integer of Base1 is " << base1_int << endl;
            cout << "The value of integer of Base2 is " << base2_int << endl;
            cout << "The sum of value of integers of Base1 and Base2 is " << base1_int + base2_int << endl;
        }
};
*/


int main(){
    int x, y, z;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;

    Derived d1;
    d1.set_base1_int(x);
    d1.set_base2_int(y);
    d1.set_base3_int(z);
    d1.display_int();
    return 0;
}
