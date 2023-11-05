#include <iostream>
using namespace std;

int sum(int a, int b){
    cout << "Using Finction with 2 argument" << endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout << "Using Finction with 3 argument" << endl;
    return a+b+c;
}

// Volume of Cylinder
double vol(double r, double h){
    return (3.14*r*r*h);
}
// Volume of Sphere
// double vol(double r){
//     return ((4/3)*3.14*r*r*r);
// } 
// Volume of Cube
double vol(double l){
    return (l*l*l);
} 
// Volume of Cubiod
double vol(double l, double b, double h){
    return (l*b*h);
} 

int main(){
    // cout << sum(45,55) << endl;
    // cout << sum(10,12,14) << endl;
    cout << "The volume of cylinder is " << vol(4.5, 12.5) << endl;
    cout << "The volume of cube is " << vol(2.3) << endl;
    cout << "The volume of cuboid is " << vol(6.25,4.2,5.8) << endl;
    return 0;
}