#include <iostream>
#include <string>
using namespace std;

// Objects can be declared along with the class.
// Ex:
// class employee{

// } subham, atal, aayush;
// subham.salary ---> if salary is private then we cannot set value like this. It will throw an error. We can set the value by methods or function

/*
class Employee{
    private:
        int id;
        int salary;
    public:    
        string name;
        int age;
        void func1(int x, int y){
            id = x;
            salary = y;
        }
        void func2(){
            cout << "The name of employee is " << name << endl; 
            cout << "The age of employee is " << age << endl; 
            cout << "The id of employee is " << id << endl; 
            cout << "The salary of employee is " << salary << endl; 
        }
};
// subham;

// void Employee :: func1(int x, int y){
//     id = x;
//     salary = y;
// }

int main(){
    Employee subham;
    subham.name = "Subham";
    subham.age = 20;
    subham.func1(707, 500000);
    subham.func2();
    return 0;
}
*/

class binary{
    // private:     // by default the members of the class are private
        string s;
    public:
        void func_read(void);
        void func_check_bin(void);
        void func_ones_compliment(void);
        void func_display(void);
};

void binary :: func_read(void){
    cout << "Enter the binary number: ";
    cin >> s;
}

void binary :: func_check_bin(void){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect binary" << endl;
            exit(0);
        }
        
    }
    
}

void binary :: func_ones_compliment(void){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0'){
            s.at(i) = '1'; 
            // cout << s.at(i);   
        } 
        else if (s.at(i) == '1'){
            s.at(i) = '0'; 
            // cout << s.at(i);   
        }
    }    
    
}

void binary :: func_display(void){
    cout << "Display binary number" << endl;
    for (int i = 0; i < s.length(); i++){
            cout << s.at(i);
    }
    cout << endl;
        
}

int main(){
    binary subham;
    subham.func_read();
    subham.func_check_bin();
    subham.func_display();
    subham.func_ones_compliment();
    subham.func_display();
    return 0;
}