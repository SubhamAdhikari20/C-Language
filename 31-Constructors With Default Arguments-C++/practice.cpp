#include <iostream>
using namespace std;

class num{
    float a, b ,c;
    // friend class average;
    friend float average(num c1);
    public:
        num(float x, float y, float z){
            a = x;
            b = y;
            c = z;
        }
};

// class average{
//     public:
//         float avg(num c1){
//             return (c1.a + c1.b + c1.c)/3;
// }
// };

float average(num c1){
    return (c1.a + c1.b + c1.c)/3;
}    

int main(){
    float a1, b1, c1;
    cout << "Enter the value of a1: ";
    cin >> a1;
    cout << "Enter the value of b1: ";
    cin >> b1;
    cout << "Enter the value of c1: ";
    cin >> c1;

    num o1(a1, b1, c1);
    // average av;
    // cout << "The average of number " << a1 << ", " << b1 << " and " << c1 << " is " << av.avg(o1);

    cout << "The average of number " << a1 << ", " << b1 << " and " << c1 << " is " << average(o1);
    return 0;
}