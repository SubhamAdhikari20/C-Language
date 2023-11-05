#include <iostream>
using namespace std;

// Forward Declaration
class Y;

class X{
    int data;
    friend void add(X, Y);
    public:
        void set_value(int value){
            data = value;
        }
};

class Y{
    int num;
    friend void add(X, Y);
    public:
        void set_value(int value){
            num = value;
        }
};


void add(X o1, Y o2){
    cout << "The sum of values of object of X and object of Y is " << o1.data + o2.num << endl;
}

int main(){
    X a;
    Y b;
    a.set_value(5);
    b.set_value(10);
    add(a,b);
    return 0;
}