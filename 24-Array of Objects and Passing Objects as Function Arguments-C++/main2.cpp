#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void setdata(int x, int y){
            a = x;
            b = y;
        }

        void setdata_bysum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void print_num(){
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setdata(4, 5);
    c1.print_num();

    c2.setdata(8,9);
    c2.print_num(); 

    c3.setdata_bysum(c1, c2);
    c3.print_num();
    return 0;
}