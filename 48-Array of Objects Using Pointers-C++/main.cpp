#include <iostream>
using namespace std;

class Shop_item{
    int id_item;
    float price_item;
    public:
        Shop_item(){}
        
        Shop_item(int a, float b) : id_item(a), price_item(b){
            // cout << "Shop Constructor is called" << endl;
        }

        void print_item(void){
            cout << "The id of item is " << id_item << endl;
            cout << "The price of item is " << price_item << endl;
        }

};

/*
        1           2           3
        ^
        |
        |
        ptr
        ptr_temp


*/

int main(){
    /*
    1. Rice
    2. Vegetables
    3. Wheat
    */
    int size = 2;
    int p;
    float q;
    Shop_item *ptr = new Shop_item[size];
    // *ptr = Shop_item(p,q); 
    Shop_item *ptr_temp = ptr;
    for (int i = 0; i < size; i++){
        cout << "Enter id of item" << i+1 << ": ";
        cin >> p;
        cout << "Enter price of item" << i+1 << ": ";
        cin >> q;
        *ptr= Shop_item(p,q);
        // ptr -> print_item();
        ptr++;
    }

    for (int i = 0; i < size; i++){
        cout << "Item no: " << i+1 << endl;;
        // (*ptr).print_item();
        ptr_temp -> print_item();
        ptr_temp++;
    }
    


    return 0;
}