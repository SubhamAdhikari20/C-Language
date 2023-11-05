#include <iostream>
using namespace std;

class Animal{
    public:
    string name = "Subham";
};
int main(){
    Animal a;
    cout << "My name is " << a.name << endl;
    return 0;
}