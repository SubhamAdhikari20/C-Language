#include <iostream>
using namespace std;
// Writing our First program in Template (C++)

template <class T>
class Vector{
    public:
        T *arr;
        int size;
        Vector(){};
        Vector(int a){
            size = a;
            arr = new T[size];
        }
        
        T dot_product(Vector &o1){
            T d = 0;
            for (int i = 0; i < size; i++){
                d += this -> arr[i] * o1.arr[i];
            }
            
            return d;
        }
};

int main(){
    Vector <float> v1(4);
    // v1 = Vector(4);
    v1.arr[0] = 5;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    v1.arr[3] = 7;

    
    Vector <float> v2(4);
    // v2 = Vector(4);
    v2.arr[0] = 4.67;
    v2.arr[1] = 7.55;
    v2.arr[2] = 8.22;
    v2.arr[3] = 9.12;

    float x = v1.dot_product(v2);
    cout << x << endl;

    return 0;
}