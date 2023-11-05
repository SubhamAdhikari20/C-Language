#include <iostream>
using namespace std;
/*
Constructors in Derived Class in C++ :
1. We can use constructors in derived classes in C++
2. If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
3. But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
4. If both base and derived classes have constructors, base class constructor is executed first

Constructors in Multiple Inheritances:
1. In multiple inheritances, base classes are constructed in the order in which they appear in the class deceleration. For example if there are three classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”. If the class “A” is written before class “B” then the constructor of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.

2.In multilevel inheritance, the constructors are executed in the order of inheritance. For example if there are three classes “A”, “B”, and “C”, and the class “B” is inheriting classes “A” and the class “C” is inheriting classes “B”. Then the constructor will run according to the order of inheritance such as the constructor of class “A” will be called first then the constructor of class “B” will be called and at the end constructor of class “C” will be called.

Special Syntax:
1. C++ supports a special syntax for passing arguments to multiple base classes
2. The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
3. The body is called after the constructors is finished executing

Syntax Example:

Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)

Special Case of Virtual Base Class:
1. The constructors for virtual base classes are invoked before a non-virtual base class
2. If there are multiple virtual base classes, they are invoked in the order declared
3. Any non-virtual base class are then constructed before the derived class constructor is executed
*/
int main(){
    
    return 0;
}