#include <iostream>
using namespace std;

class bank_deposit{
    int principal;
    int time;
    float interest_rate;
    float return_value;
    public:
        bank_deposit(){};
        bank_deposit(int p, int t, float r);   // r can be a fractional or decimal value like 1/8 or 0.5 respectively 
        bank_deposit(int p, int t, int r);     // r can be a integer in percentage value like 15% or 20%.
        
        void show(void);

};

bank_deposit :: bank_deposit(int p, int t, float r){
    principal = p;
    time = t;
    interest_rate = r;
    return_value = principal;
    for (int i = 0; i < time; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
    
}

bank_deposit :: bank_deposit(int p, int t, int r){
    principal = p;
    time = t;
    interest_rate = float(r)/100;
    return_value = principal;
    for (int i = 0; i < time; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
    
}

void bank_deposit :: show(void){
    cout << "Principal amount was " << principal << endl << "Return_value after " << time << " years is " << return_value << endl;  
}

int main(){
    int p, t;
    float r;   // Rate of interest in floating number like 0.4
    int R;     // Rate of interest in int number like 15 or 2.    
    bank_deposit o1, o2, o3;
    // o1 = bank_deposit();
    // o1.show();

    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the time period: ";
    cin >> t;
    cout << "Enter the rate of interest: ";
    cin >> r;
    o2 = bank_deposit(p, t, r);
    o2.show();

    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the time period: ";
    cin >> t;
    cout << "Enter the rate of interest: ";
    cin >> R;
    o3 = bank_deposit(p, t, R);
    o3.show();
    
    // o3 = bank_deposit(P, T, R);
    // o3.show();

    return 0;
}