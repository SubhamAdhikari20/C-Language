#include <iostream>
using namespace std;

int main(){
    // Multiplication table of 7 using "For Loop"
    cout << "Multiplication table of 7 using 'For Loop'" << endl;
    for (int a = 1; a<=10; a++){
        cout << "7 x " << a << " = " << 7 * a << endl;
    }
    cout << endl;
    
    // Multiplication table of 8 using "While Loop"
    cout << "Multiplication table of 8 using 'While Loop'" << endl;
    int b = 1;
    while (b <= 10){
        cout << "8 x " << b << " = " << 8 * b << endl;
        b++;
    }
    cout << endl;

    // Multiplication table of 9 using "Do While Loop"
    cout << "Multiplication table of 9 using 'Do While Loop'" << endl;
    int c = 1;
    do{
        cout << "9 x " << c << " = " << 9 * c << endl;
        c++;
    }while(c <= 10);

    return 0;
}