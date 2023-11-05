#include <iostream>
using namespace std;

class shop{
    int item_id[100];
    int item_price[100];
    int counter;
    public:
        void init_couter(void){
            counter = 0;
        }
        void set_price(void);
        void display_price(void);
};

void shop :: set_price(void){
    cout << "Enter id of your item no. " << counter+1 << " : "; 
    cin >> item_id[counter];
    cout << "Enter price of your item: ";
    cin >> item_price[counter];
    counter ++;
}

void shop :: display_price(void){
    for (int i = 0; i < counter; i++){
        cout << "The price of the item of id " << item_id[i] << " is " << item_price[i] << endl;
    }
    
}

int main(){
    shop mero;
    mero.init_couter();
    mero.set_price();
    mero.set_price();
    mero.set_price();
    mero.display_price();
    return 0;
}