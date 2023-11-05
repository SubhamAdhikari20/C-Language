#include <iostream>
using namespace std;

// float average1(float a, float b, float c){
//     float avg = (a+b+c)/3;
//     return avg;
// }
// float average2(int a, int b, float c){
//     float avg = (a+b+c)/3;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b){
    T tem = a;
    a = b;
    b = tem;

}

template <class T1, class T2, class T3>
float average(T1 a, T2 b, T3 c){
    float avg = (a+b+c)/3;
    return avg;
}

int main(){
    // float av = average(8, 7, 6.64);
    // printf("The average of the numbers is %.4f", av);
    
    int x = 4, y = 9;
    // cout << "The value of x is " << x << endl << "The value of y is " << y << endl;
    swapp(x, y);
    cout << "The value of x is " << x << endl << "The value of y is " << y << endl;
    return 0;
}