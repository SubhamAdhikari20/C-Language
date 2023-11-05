#include <iostream>
using namespace std;

class Employee
{
    private:
        int a , b, c;
    public:
        int d, e ,f;
        void set_data(int x, int y, int z);    // This only declaration
        void get_data(){
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
            cout << "The value of f is " << f << endl;
        }    

};

void Employee :: set_data(int x, int y, int z){     // this is the complete function that was declare
    a = x;
    b = y;     // It is allowed
    c = z;
}

int main(){
    Employee subham;
    // subham.a = 45;
    // subham.b = 78;     // They will throw error because they are private
    // subham.c = 98;
    subham.d = 85;
    subham.e = 54;
    subham.f = 12;
    subham.set_data(4,5,6);
    subham.get_data();
    return 0;
}
