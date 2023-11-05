#include <iostream>
using namespace std;

class Shop{
    int item_id[100];
    int item_price[100];
    int counter;
    public:
        void init_counter(void){
            counter = 0;
        }
        void set_price(void);
        void display_price(void);
};

void Shop :: set_price(void){
    cout << "Enter the id of your item no. " << counter+1 << " : ";
    cin >> item_id[counter];
    cout << "Enter the price of your item: ";
    cin >> item_price[counter];
    counter ++;
}

void Shop :: display_price(void){\
    for (int i = 0; i < counter; i++)
    {
    cout << "The price of your item of id  " << item_id[i] << " is " << item_price[i] << endl;    
    }   
}

int main(){
    Shop karki;
    karki.init_counter();
    karki.set_price();
    karki.set_price();
    karki.display_price();
    return 0;
}