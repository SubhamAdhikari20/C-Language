#include <iostream>
using namespace std;
/*
For a protected member:
                        Public Derivation     Private Derivation     Protected Derivation
 1. Private members       Not Inherited         Not Inherited          Not Inherited
 2. Protected members     Protected             Private                Protected
 3. Public members        Public                Private                Protected
*/

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student ::  set_roll_number(int r){
    roll_number = r;
};

void Student ::  get_roll_number(void){
    cout << "The roll no. of the students is " << roll_number << endl;
};


class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam :: set_marks(float m, float p){
    maths = m;
    physics = p;
};

void Exam :: get_marks(void){
    cout << "The marks of the student in maths subject is " << maths  << endl;
    cout << "The marks of the student in physics subject is " << physics  << endl;
};

class Results : public Exam{
    float percentage;
    public:
        void result_display(void){
            get_roll_number();
            get_marks();
            percentage = (maths + physics)/2;
            cout << "The result is " << percentage << "%" << endl;
        }
};

int main(){
    /*
    Notes:
        If we are inheriting B from A and C from B i.e  A ----> B ----> C :
        1. A is the base class of B, B is the base class of C
        2. A ----> B ----> C is called Inheritance Path.
    */

    // Student s1;
    // s1.set_roll_number(27);
    // s1.get_roll_number();

    // Exam e1;
    // e1.set_marks(92.5, 85);
    // e1.get_marks();

    Results subham;
    subham.set_roll_number(479);
    subham.set_marks(92.5, 85);
    subham.result_display();

    return 0;
}