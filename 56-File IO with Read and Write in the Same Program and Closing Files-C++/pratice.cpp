#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Connecting our file with sout stream
    ofstream sout;
    sout = ofstream("write.txt");
    cout << "Enter your name: ";
    string name;    // Creating a string named "name" to take input from the user
    // cin >> name;
    getline(cin, name);
    sout << "My name is " + name;      // outputing the data into the file
    sout.close();   // The link is closed with file. 

    ifstream sin("write.txt");
    string meme;
    // sin >> meme;
    getline(sin, meme);
    cout << meme;
    sin.close();
    return 0;
}