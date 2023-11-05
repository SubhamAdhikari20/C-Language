#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {2, 6, 4, 10, 8, 16, 14, 12};
    // sort(arr, arr+8);
    sort(arr, arr+8, greater <int> ());     // "greater <int> ()" is Function Object (Functor)
    for (int i = 0; i < 8; i++){
        cout << arr[i] << "  ";
    }
    
    return 0;
}
/*
Function Objects: Function, wrapped in a class so that it can be used as an object


*/