#include <iostream>
using namespace std;

// Destructor neither takes arguments nor returns value
int count = 0;
class num{
    public:
        num(){
            count ++;
            cout << "Time when constructor is called for object no. " << count << endl;
        }
        
        ~num(){
            cout << "Time when destructor is called for object no. " << count << endl;
            count --;
        }
};

int main(){
    cout << "We are inside the main function" << endl;
    cout << "Creating object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects: n2, n3" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}

/*
What is a destructor?

Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

1. A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
2. Destructor has the same name as their class name preceded by a tilde (~) symbol.
3. It is not possible to define more than one destructor. 
4. The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
5. Destructor neither requires any argument nor returns any value.
6. It is automatically called when an object goes out of scope. 
7. Destructor release memory space occupied by the objects created by the constructor.
8. In destructor, objects are destroyed in the reverse of an object creation.

The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory.  
*/