#include <iostream>
#include <cmath>

using namespace std;

class P{
    int x1, y1;
    friend class distance_PQ;
    public:
        P(int a, int b){    // Constructor declared
            x1 = a;
            y1 = b;
        } 
        void display_point(void){
            cout << "The x and y coordinate of a point P(x1, y1) is " << "(" << x1 << ", " << y1 << ")" << endl;
        }
};

class Q{
    int x2, y2;
    friend class distance_PQ;
    public:
        Q(int a, int b){    // Constructor declared
            x2 = a;
            y2 = b;
        } 
        void display_point(void){
            cout << "The x and y coordinate of a point Q(x2, y2) is " << "(" << x2 << ", " << y2 << ")" << endl;
        }
};

class distance_PQ{
    public:
        int PQ(P c1, Q c2);
};

int distance_PQ :: PQ(P c1, Q c2){
    return sqrt(pow((c2.x2 - c1.x1), 2) + pow((c2.y2 - c1.y1), 2));
}

// int distance_PQ :: PQ(P c1, Q c2){
//     return sqrt(((c2.x2 - c1.x1)*(c2.x2 - c1.x1)) + ((c2.y2 - c1.y1)*(c2.y2 - c1.y1)));
// }

int main(){
    int x1,x2,y1,y2;
    cout << "Enter the value of x-coordinate of point P: ";
    cin >> x1;
    cout << "Enter the value of y-coordinate of point P: ";
    cin >> y1;
    cout << "Enter the value of x-coordinate of point Q: ";
    cin >> x2;
    cout << "Enter the value of y-coordinate of point Q: ";
    cin >> y2;
    
    // For P
    P o1(x1, y1);
    o1.display_point();
    
    // For Q
    Q o2(x2, y2);
    o2.display_point();

    // For the distance between points P and Q
    distance_PQ d1;
    cout << "The distance between point P(" << x1 << ", " << y1 << ") and Q(" << x2 << ", " << y2 << ") is " << d1.PQ(o1, o2) << " units";

    return 0;
}