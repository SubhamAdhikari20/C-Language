#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void set_num(int x, int y){
            a = x;
            b = y;
        }

        friend int sum_real_complex(complex o1, complex o2);      // It is just a declaration
        friend int sum_comp_complex(complex o1, complex o2);      // It is just a declaration
        // friend function is not the member of the class but has access to the private and protected members of the class
        void print_num(){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

// Friend function: friend function is not the member of the class but has access to the private and protected members of the class
int sum_real_complex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int sum_comp_complex(complex o1, complex o2){
    return (o1.b + o2.b); 
}

int main(){
    complex c1, c2, sum;
    c1.set_num(4,5);
    c1.print_num();

    c2.set_num(6,7);
    c2.print_num();

    int sum_real = sum_real_complex(c1, c2);
    int sum_comp = sum_comp_complex(c1, c2);
    cout <<" The sum of real part of complex number is " << sum_real << endl;
    cout <<" The sum of comp part of complex number is " << sum_comp << endl;
    return 0;
}

/*
Properties of the friend functions:
1. Not the member of the class or not in the scope of the class
2. Since it is not member of the class, the objects of class cannot call it as a member function. Ex: c3.sum_complex(c1, c2) is invaild.
3. Can be invoked without the help of the object.
4. Usually contains objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access member of the class directly; they need objects to access them. Ex: object_name.member_name
*/