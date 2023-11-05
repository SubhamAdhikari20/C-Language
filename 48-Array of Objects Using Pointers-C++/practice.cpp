#include <iostream>
using namespace std;

class Shop_item{
    int id_item;
    float price_item;
    public:
        Shop_item(){};
        Shop_item(int a, float b) : id_item(a), price_item(b){};
        
        void print_item(void){
            cout << "The id of the item is " << id_item << endl;
            cout << "The price of the item is " << price_item << endl;
        }
};

int main(){
    int p;
    float q;
    int size = 2;
    Shop_item *ptr = new Shop_item[size];
    // *ptr = Shop_item(p,q);
    Shop_item *ptr_temp = ptr;
    for (int i = 0; i < size; i++){
        cout << "Enter the id number of item" << i+1 << ": ";
        cin >> p;
        cout << "Enter the price of item" << i+1 << ": ";
        cin >> q;
        *ptr = Shop_item(p, q);
        // ptr -> print_item();
        ptr++;
    }
    
    for (int i = 0; i < size; i++){
        cout << "Item no." << i+1 << endl;
        ptr_temp -> print_item();
        ptr_temp++;
    }
    
    return 0;
}