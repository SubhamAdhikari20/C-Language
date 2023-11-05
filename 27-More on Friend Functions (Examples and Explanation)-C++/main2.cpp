#include <iostream>
using namespace std;

// Forward declaration
class c2;

class c1{
    int c1_value;
    friend void swap(c1 &, c2 &);
    public:
        void set_data(int a){
            c1_value = a;
        }

        void display(void){
            cout << "The value is " << c1_value << endl;
        }
};

class c2{
    int c2_value;
    friend void swap(c1 &, c2 &);
    public:
        void set_data(int a){
            c2_value = a;
        }

        void display(void){
            cout << "The value is " << c2_value << endl;
        }
};

void swap(c1 &x, c2 &y){
    int tem = x.c1_value;
    x.c1_value = y.c2_value;
    y.c2_value = tem;
}

// void swap_display()

int main(){
    c1 a;
    a.set_data(7);
    a.display();
    
    c2 b;
    b.set_data(3);
    b.display();

    swap(a,b);
    cout << "The value of a after swaping is ";
    a.display();
    cout << "\nThe value of b after swaping is ";
    b.display();
    return 0;
}