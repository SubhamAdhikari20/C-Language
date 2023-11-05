#include <iostream>
using namespace std;

class Employee{
    string name;
    int age;
    string sector;

    public:
        void employee_details(string a, int b, string c){
            name = a;
            age = b;
            sector = c;
        }

        void employee_display(void){
            cout << "The name of employee is " << name << endl;
            cout << "The age of employee is " << age << endl;
            cout << "The employee is a " << sector << endl;
        }
};

class Programmer : public Employee{
    string specialization;
    int salary;
    public:
        void programmer_details(string d, int e){
            specialization = d;
            salary = e;
        }
        void programmer_display(void){
            cout << "The specialization of programmer is " << specialization << endl;
            cout << "The salary of programmer is $" << salary << endl;
        }
};


int main(){
    // Employee e1;
    // e1.employee_details("Subham Adhiakri", 25, "Programmer");
    // e1.employee_display();

    Programmer p1;
    p1.employee_details("Subham Adhiakri", 25, "Programmer");
    p1.employee_display();
    p1.programmer_details("Data Science", 1000000);
    p1.programmer_display();
    return 0;
}

/*
Types of Inheritance:

1. Single Inheritance: a class is allowed to inherit from only one class. i.e. one derived is inherited by one base class only.
Ex:    A ----> B     

2. Multiple Inhertance: a class can inherit from more than one class. i.e one derived class is inherited from more than one base class.
Ex:    A -----> C
       B -------^

3. Hierarchical Inheritance: more than one derived class is inherited from a single base class. i.e. more than one derived class is created from a single base class.
Ex:    A -----> B
         -----> C 

4. Multilevel Inheritance: a derived class is created from another derived class.
Ex:    A -----> B -----> C

5. Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 
*/ 