#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream write;
    write.open("write.txt");
    // write << "This is not power of your creation";
    write << "This is not power of your creation" << endl;
    write << "This world shall know pain" << endl;
    write << "Those who don't know pain will never understand true peace" << endl;
    write.close();

    ifstream read;
    read.open("write.txt");
    string a;
    // read >> a;
    // getline(read, a);
    // cout << a;
    while (read.eof() == 0){    // When "eof" reaches "0" then loop will end.
        // read >> a;
        getline(read, a);
        cout << a << endl;
    }
    read.close();

    return 0;
}

/*
"open()" is another way to access file other than using constructor
"eof()" means the end of file. When it re
*/