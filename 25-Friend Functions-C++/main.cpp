#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void set_num(int x, int y){
            a = x;
            b = y;
        }

        friend complex sum_complex(complex o1, complex o2);      // It is just a declaration
        // friend function is not the member of the class but has access to the private and protected members of the class
        void print_num(){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

// Friend function: friend function is not the member of the class but has access to the private and protected members of the class
complex sum_complex(complex o1, complex o2){
    complex o3;
    o3.set_num((o1.a + o2.a), (o1.b + o2.b));
    return o3; 
}

int main(){
    complex c1, c2, sum;
    c1.set_num(4,5);
    c1.print_num();

    c2.set_num(6,7);
    c2.print_num();

    sum = sum_complex(c1, c2);
    sum.print_num();

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