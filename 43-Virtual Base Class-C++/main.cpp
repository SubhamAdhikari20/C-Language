#include <iostream>
using namespace std;

/*
Student ----> Test -------> Results
   `--------> Sports----------^   
*/
// Note: We can write either "virtual public" or "public virtual", it doesnot matter

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int n){
            roll_no = n;
        }
        void print_number(void){
            cout << "The roll number of the student is " << roll_no << endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout << "The marks of the student: " << endl
                 << "Maths: " << maths << endl
                 << "Physics: " << physics << endl;                             
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(void){
            cout << "The PT score of the student is " << score << endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display_result(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "The overrall result of the student is " << total << endl;
        }
};

int main(){
    Student s1;
    // s1.set_number(45);
    Test t1;

    Sports g1;
    
    Result subham;
    subham.set_number(479);
    subham.set_marks(98.5, 94);
    subham.set_score(95);
    subham.display_result();
    return 0;
}
