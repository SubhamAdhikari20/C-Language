#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ----> derived from "fstream" class
2. ofstream ----> derived from "fstream" class

In order work with files in C++, you will have to open it. 
There are two ways to open a file:
1. Using the constructor
2. Using the member function "open()" of the class.
*/

int main(){
    string a = "This world shall know pain";
    string b;

    // Opening file using constructor and writing in it
    ofstream out("write.txt");     // Write operation
    out << a;

    // Opening file using constructor and reading in it
    ifstream in("read.txt");     // Read operation
    // in >> b;
    getline(in, b);     // To read the entire line with spaces and new line in it.
    cout << b;
    // getline(in, b);     
    // cout << b;
    // getline(in, b);     
    // cout << b;
    // getline(in, b);     
    // cout << b;
    return 0;
}