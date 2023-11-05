#include <iostream>
using namespace std;

class point{
    int x,y;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void display_point(void){
            cout << "The x and y coordinate of a point (x, y) is " << "(" << x << ", " << y << ")" << endl;
        }
};

int main(){
    point o1(4,6);
    o1.display_point();
    return 0;
}