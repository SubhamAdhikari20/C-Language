#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector <T> &v){
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    // Ways to create a vector
    
    vector <int> vec1;      // zero length integer vector
    int element;
    int size = 4;
    // cout << "Enter the size of element in your vector: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the element to add to the vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back(); 
    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+2,3, 777);
    // display(vec1);


    vector <char> vec2(3);  // 3 element character vector
    // vec2.push_back('s');
    // display(vec2);
    
    vector <char> vec3(vec2);  // 3 element char vector from vec2
    // display(vec3);
    
    vector <int> vec4(5, 3);    // 5 element vector of '3'
    display(vec4);
    cout << vec4.size(); 


    return 0;
}
/*
push_back() – It pushs the elements into a vector from the back
*/