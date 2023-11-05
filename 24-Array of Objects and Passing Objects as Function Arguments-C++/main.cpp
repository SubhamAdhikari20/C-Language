#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    static int counter;    // By default the value of counter is 0 in static
    public:
        void set_id(void);
        void get_id(void);
        void set_salary(void);
        void get_salary(void);
};

void Employee :: set_id(void){
            cout << "Enter the id of the employee no. " << counter+1 << " : ";
            cin >> id;
            
        }
void Employee :: get_id(void){
            cout << "The id of the employee no. " << counter + 1 << " is " << id << endl;
        }

void Employee :: set_salary(void){
            cout << "Enter the salary of the employee no. " << counter + 1 << " : ";
            cin >> salary;
        }
void Employee :: get_salary(void){
            cout << "The salary of employee" << " no. " << counter + 1 << " with id " << id << " is " << salary << endl;
            counter++;
        }

int Employee :: counter;   // Static Variable

int main(){
    // Employee subham, atal, ayush, dinesh;
    // subham.set_id();
    // subham.get_id();
    // subham.set_salary();
    // subham.get_salary();

    Employee google[4];
    for (int i = 0; i < 4; i++){
       google[i].set_id();
       google[i].get_id();
       google[i].set_salary();
       google[i].get_salary();
    }
    

    return 0;
}