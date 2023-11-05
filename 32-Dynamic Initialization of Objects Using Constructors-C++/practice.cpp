#include <iostream>
using namespace std;

class bank_deposit{
    int principal;
    int time;
    float interest_rate;
    float return_value;
    public:
        bank_deposit(){};
        bank_deposit(int p, int t, int r);
        bank_deposit(int p, int t, float r);
    
    void result(void);
};

bank_deposit :: bank_deposit(int p, int t, int r){
    principal = p;
    time = t;
    interest_rate = float(r)/100;
    return_value = principal;
    for (int i = 0; i < time; i++){
        return_value = return_value * (1 + interest_rate);
    }  
}

bank_deposit :: bank_deposit(int p, int t, float r){
    principal = p;
    time = t;
    interest_rate = r;
    return_value = principal;
    for (int i = 0; i < time; i++){
        return_value = return_value * (1 + interest_rate);
    }  
}

void bank_deposit :: result(void){
    cout << "Principal was " << principal << endl
         << "Return value after " << time << " years is " << return_value << endl;    
}



int main(){
    int p;
    int t;
    float r;
    int R;
    bank_deposit o1, o2, o3;

    cout << "Enter the value of principal: ";
    cin >> p;
    cout << "Enter the value of time: ";
    cin >> t;
    cout << "Enter the value of rate of interest: ";
    cin >> r;
    o1 = bank_deposit(p, t, r);
    o1.result();


    // cout << "Enter the value of principal: ";
    // cin >> p;
    // cout << "Enter the value of time: ";
    // cin >> t;
    // cout << "Enter the value of rate of interest";
    // cin >> R;
    
    // o2 = bank_deposit(p, t, R);
    // o2.result();

    return 0;
}