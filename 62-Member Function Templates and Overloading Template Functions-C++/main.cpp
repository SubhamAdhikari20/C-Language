#include <iostream>
using namespace std;

template <class T>
class A{
    public:
        T data;
        A(T a){
            data = a;
        }
        void display(void);
        // void display(void){
        //     cout << "The value of data is " << data << endl;
        // }
};

template <class T>
void A <T> :: display(void){
    cout << "The value of data is " << data << endl;
}

void func(int a){
    cout << "Func1 " << a << endl;
}

template <class T>
void func(T b){
    cout << "This is templatized function " << b << endl;
}

int main(){
    // A <int> e1(4);
    // // cout << e1.data;
    // e1.display();


    func(5);    
    // func('e');
    return 0;
}

/*
If lets say we have two functions with same names (one has datatype defined and other doesnot but is a template), then the function with defined datatype will take priority
*/