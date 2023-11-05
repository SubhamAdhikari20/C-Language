#include <iostream>
#include <list>
using namespace std;

void display(list <int> &l){
    list <int> :: iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << "  ";
    }   
    cout << endl;
}

int main(){
    list <int> l1;  // list of 0 length ---> size 0
    l1.push_back(2);
    l1.push_back(6);
    l1.push_back(4);
    l1.push_back(10);
    l1.push_back(8);
    display(l1);

    // l1.reverse();
    // display(l1);
    // list <int> :: iterator itr;
    // itr = l1.begin();       // points to the first element of the list
    // cout << *itr << endl;   // outputs the first element of the list
    
    // itr++;                  // points to the second element of the list
    // cout << *itr << endl;   // outputs the second element of the list
    
    // itr++;                  // points to the third element of the list
    // cout << *itr << endl;   // outputs the third element of the list
    
    // itr++;                  // points to the fourth element of the list
    // cout << *itr << endl;   // outputs the fourth element of the list
    
    // itr++;                  // points to the fifth element of the list
    // cout << *itr << endl;   // outputs the fifth element of the list

    // l1.pop_front();     // deletes the elements of the list from front  
    // display(l1);
    // l1.pop_back();      // deletes the elements of the list from back
    // display(l1);
    // l1.remove(6);   // remove the specified element from the list 
    // display(l1);

    // l1.sort();      // sorts the elements and updates the array or list
    // display(l1);

    list <int> l2(3);  // Empty list of size 7
    list <int> :: iterator iter;
    iter = l2.begin();
    
    *iter = 45;
    ++iter;
    *iter = 56;
    ++iter;
    *iter = 77;

    display(l2);

    // cout << "After merging: ";
    // l1.merge(l2);       // merges the l2 with l1 and updates l1
    // display(l1);  

    // l1.swap(l2);     // swaps the elements of l2
    // display(l1);   
    return 0;
}