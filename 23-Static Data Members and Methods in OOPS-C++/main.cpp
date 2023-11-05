#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;    // static variable is also called class variable
    // int count = 0;
    public:
        void setdata(void){
            cout << "Enter the id: ";
            cin >> id;
            count ++;
        }
        void getdata(void){
            cout << "The id of this employee is " << id << " and this employee no is " << count << endl;
        }
        static void getcount(void){
            // cout << id;      // Throws an errror
            cout << "The value of count is " << count << endl;
        }
};

int Employee :: count;     // default value is 0

int main(){
    Employee subham, atal, ayush;
    // subham.id;               // will throw error because id and count are private
    // subham.count;
    subham.setdata();
    subham.getdata();
    // subham.getcount();
    Employee :: getcount();
    
    atal.setdata();
    atal.getdata();
    // subham.getcount();
    Employee :: getcount();

    ayush.setdata();
    ayush.getdata();
    // subham.getcount();
    Employee :: getcount();
    return 0;
}