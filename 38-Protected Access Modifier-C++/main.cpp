#include <iostream>
using namespace std;

class Base{
    protected:      // private but can be inheritated
        int a;
    private:
        int b;
};

/*
For a protected member:
                        Public Derivation     Private Derivation     Protected Derivation
 1. Private members       Not Inherited         Not Inherited          Not Inherited
 2. Protected members     Protected             Private                Protected
 3. Public members        Public                Private                Protected
*/

class Derived : protected Base{

};

int main(){
    Base b1;
    Derived d1;

    // cout << d1.a;     // will throw an error because a is protected in both base as well as derived class.
    return 0;
}