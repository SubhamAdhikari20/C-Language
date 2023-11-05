#include <iostream>
using namespace std;

class Base{
    int data1;   // private by default and is not inheritable
    public:
        int data2;
        void set_data(void); 
        int get_data1(void); 
        int get_data2(void); 
};

void Base :: set_data(void){
    data1 = 101;
    data2 = 201;
}
int Base :: get_data1(void){
    return data1;
}

int Base :: get_data2(void){
    return data2;
}

class Derived : public Base  // class Derived is derived publically 
{       
    int data3;
    public:
        void process(void);
        void display(void);
};

void Derived :: process(void){
    data3 = data2 * get_data1();
}

void Derived :: display(void){
    cout << "The value of data1 is " << get_data1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}

int main(){
    // Base b1;
    // b1.set_data();
    // b1.get_data1();
    // b1.get_data2();

    Derived d1;
    d1.set_data();
    // d1.get_data1();
    // d1.get_data2();
    d1.process();
    d1.display();
    return 0;
}