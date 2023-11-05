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
        Student(){};    // Default Constructor

        Student(int n){
            roll_no = n;
        }
        // void set_number(int n){
        //     roll_no = n;
        // }
        void print_number(void){
            cout << "The roll number of the student is " << roll_no << endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths;
        float physics;
    public:
        Test(){};      // Default Constructor

        Test(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        // void set_marks(float m1, float m2){
        //     maths = m1;
        //     physics = m2;
        // }
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
        Sports(){};

        Sports(float s){
            score = s;
        }
        // void set_score(float s){
        //     score = s;
        // }
        void print_score(void){
            cout << "The PT score of the student is " << score << endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
        int num1;
        int num2;
    public:
        Result(){};
        Result(int a, float b, float c, float d, int e, int f) : Student(a), Test(b, c), Sports(d){     // here "e" and "f" are the arguments of "Result" constructor
            num1 = e;
            num2 = f;
        };
        void display_result(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "The overrall result of the student is " << total << endl;
            cout << "The sum of num1 and num2 is " << num1 + num2 << endl;
        }
};

int main(){
    // Student s1;
    // s1.set_number(45);
    // Test t1;

    // Sports g1;
    
    Result subham;
    subham = Result(479, 95.6, 98.6, 78.4, 12, 8);
    subham.display_result();
    return 0;
}
