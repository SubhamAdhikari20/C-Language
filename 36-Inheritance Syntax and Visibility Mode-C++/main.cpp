#include <iostream>
using namespace std;

// Base Class (Parent Class)
class Employee{
    public: 
    int id;
    float salary;
        Employee(){
            id = 0;
            salary = 0;
        };
        Employee(int a, float b){
            id = a;
            salary = b;
        };
};

// Derived class (Child Class) 
/*
Derived Class Syntax:
class  {{derived-class_name}} : {{visibility-mode}}  {{base-class_name}}  
{
    members/methods,etc.....
};

Note: 
1. The default visibility-mode is private.
2. Public Visibility-Mode: public members of the base class become the public members of the derived class.
3. Private Visibility-Mode: public members of the base class become the private members of the derived class.
4. We cannot inherit the private members of the base class into the derived class.
   or,
   Private members cannot be inherited.
*/

// Creating "Programmer" class derived from "Employee" class
class Programmer : Employee{
    public:
        int language_code = 10;
        // Programmer(){};
        Programmer(int i, float j){
            id = i;
        }
        void get_data(void){
            cout << id << endl;
        }
};

int main(){
    Employee e1(1001, 5000000), e2(1002, 4000000);

    Programmer p1(1003, 6000000);
    p1.get_data();
    return 0;
}