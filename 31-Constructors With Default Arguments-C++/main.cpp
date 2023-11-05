#include <iostream>
using namespace std;

class omg{
    int data1, data2, data3;
    public:
        omg(int a, int b = 5, int c = 10){            // "b" and "c" are default arguments
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void print_omg(void){
            cout << "The value of data1 is " << data1 << endl << "The value of data2 is " << data2 << endl << "The value of data3 is " << data3 << endl;
        }
};

int main(){
    omg o1(4);
    o1.print_omg();
    
    omg o2(8, 9);
    o2.print_omg();
    
    omg o3(45, 56, 89);
    o3.print_omg();

    return 0;
}