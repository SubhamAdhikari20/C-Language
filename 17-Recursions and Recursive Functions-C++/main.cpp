#include <iostream>
using namespace std;

/*
int facto(int n){
    if (n<0){
        cout << "Invalid!!!!! Do not enter negative number" << endl;
        return 0;
    }
    else if (n == 0 || n==1){
        return 1;
    }
    else if (n<=10 && n > 0){
        return n * facto(n-1);
    }
    else{
        cout << "Invalid!!!! Too long number" << endl;
        return 0;
    };
};
*/

// Fibonacci series:  0   1    1    2    3    5    8   13   21   34 

//       index:       0   1    2    3    4    5    6    7    8   9   
//       term:        1   2    3    4    5    6    7    8    9   10
/*
*/
int fibo(int z){
    // Index: 
    // if (z == 0){
    //     return 0;
    // }
    // else if (z == 1){
    //     return 1;
    // }

    // Term: 
    if (z == 1){
        return 0;
    }
    else if (z == 2){
        return 1;
    }

    else{
        return fibo(z-1) + fibo(z-2);     
        // -----> fibo(5) = fibo(4) + fibo(3) 
        // -----> = fibo(3) + fibo(2) + fibo(3)   
        // -----> = fibo(2) + fibo(1) + + fibo(1) + fibo(0) + fibo(2) + fibo(1)
        // -----> = fibo(1) + fibo(0) + fibo(1) + fibo(1) + fibo(0) + fibo(1) + fibo(0) + fibo(1)
        // -----> =   1     +   0     +    1    +   1     +   0     +    1    +   0    +    1
        // -----> =   5
    };
};

int main(){
    // Factorial of a number:
    /*
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "The factorial of " << x << " is " << facto(x) << endl;
    */
    
    // Fibonacci series:
    /*
    */
    int y;
    cout << "Enter the value of y: ";
    cin >> y;
    // Index: 
    // cout << "The index " << 4 << " of " << "fibonacci series is " << fibo(y) << endl;
    
    // Term:
    cout << "The " << y << "th term of " << "fibonacci series is " << fibo(y) << endl;
    
    // cout << "The " << y << "th term of " << "fibonacci series is ";
    /*
    for (int i = 0; i < y; i++){
        cout << fibo(i) << ",";
    };
    */
    
    return 0;
};