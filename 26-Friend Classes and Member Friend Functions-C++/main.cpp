#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator{
    public:
        int add(int a, int b){
            return (a + b);
        }

        int sum_real_complex(complex o1, complex o2);    
        int sum_comp_complex(complex o1, complex o2);
        // Declaring "sum_real_complex()" and "sum_comp_complex()" member functions that take objects of class complex - o1 and o2 as their arguments.  Note that : "sum_real_complex()" and "sum_comp_complex()" are the member functions of class calculator. 
        // Also complier doesnot consider the member of the class complex if the the class is not defined. 
        // Since here, the class complex is not defined we need to define it if we want to use its member (private or public).
};

// Defining class 
class complex{
    int a,b;
    
    // Declaring the followings as the friend functions of class calculator
    // Note: Individually declaring member functions of certain class as friends. That means not all the class is friend but only certain functions are.
    // friend int calculator :: sum_real_complex(complex o1, complex o2);
    // friend int calculator :: sum_comp_complex(complex o1, complex o2);
     
    // Declaring the entire class as friends: all the members of the declared class can has access to all the members of the class that gave the permission to become friend 
    friend class calculator;
    
    public:
        void set_num(int x, int y){
            a = x;
            b = y;
        }

        void print_num(void){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

// Now, the complier considers the member of the class complex to be used (After the class complex is defined with its members)
// Declaring the member functios of class calculator.
int calculator :: sum_real_complex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int calculator :: sum_comp_complex(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main(){
    complex c1, c2;
    c1.set_num(4,6);
    c1.print_num();
    
    c2.set_num(8,5);
    c2.print_num();
    
    calculator c3;
    int result_real = c3.sum_real_complex(c1, c2);
    cout <<" The sum of real part of complex number is " << result_real << endl;
    int result_comp = c3.sum_comp_complex(c1, c2);
    cout <<" The sum of comp part of complex number is " << result_comp << endl;
    return 0;
}
