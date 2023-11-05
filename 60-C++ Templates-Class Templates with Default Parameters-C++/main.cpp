#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Employee{
    T1 name; 
    T2 age; 
    T2 salary; 
    public:
        Employee(T1 a, T2 b, T2 c){
            name = a;
            age = b;
            salary = c;
        }
        void display(void){
            cout << "The name of the employee is " << name << endl;
            cout << "The age of the employee is " << age << endl;
            cout << "The salary of the employee is " << salary << endl;
        }
};

int main(){
    Employee <string, int> e1("Subham Adhikari", 19, 500000);
    e1.display();
    Employee <> e2(8, 19, 500000);
    e2.display();
    return 0;
}