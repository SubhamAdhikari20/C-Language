#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?  ----> Multiple Inheritance
    Q2. Which mode of Inheritance are you using? ----> public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class Simple_Calculator{
    protected:
        float a1, b1;
    public:
        void set_data1(float x1, float y1){
            a1 = x1;
            b1 = y1;
        }
        
        void display_result1(void){
            cout << "The sum of two numbers is " << a1 + b1 << endl;
            cout << "The subtraction of two numbers is " << a1 - b1 << endl;
            cout << "The division of 1st num by 2nd num is " << a1 / b1 << endl;
            cout << "The multiplication of two numbers is " << a1 * b1 << endl;
        }

};

class Scientific_Calculator{
    protected:
        float a2, b2;
    public:
        void set_data2(float x2, float y2){
            a2 = x2;
            b2 = y2;
        }
        
        void display_result2(void){
            cout << "The square of 1st number is " << a2 * a2 << endl;
            cout << "The square root of 1st number is " << sqrt(a2) << endl;
            cout << "The square of 2st number is " << b2 * b2 << endl;
            cout << "The square root of 2st number is " << sqrt(b2) << endl;
            cout << "The cube of 1st number is " << a2 * a2 *a2 << endl;
            cout << "The cube root of 1st number is " << cbrt(a2) << endl;
            cout << "The cube of 2st number is " << b2 * b2 *b2 << endl;
            cout << "The cube root of 2st number is " << cbrt(b2) << endl;
        }

};

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator{
    public:
        void set_data(float x, float y){
            set_data1(x,y);
            set_data2(x,y);
        }

        void display_result(void){
            display_result1();
            display_result2();
        }
};

int main(){
    float num1, num2;
    cout << "Enter the value of 1st number: ";
    cin >> num1;
    cout << "Enter the value of 2st number: ";
    cin >> num2;

    // Simple_Calculator c1;
    // c1.set_data1(num1, num2);
    // c1.display_result1();

    Hybrid_Calculator hc1;
    hc1.set_data(num1, num2);
    hc1.display_result();

    return 0;
}