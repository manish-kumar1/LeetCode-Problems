/*
C++ Copy Constructor

A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.

Copy Constructor is of two types:
Default Copy constructor: The compiler defines the default copy constructor. If the user defines no copy constructor, compiler supplies its constructor.
User Defined constructor: The programmer defines the user-defined constructor.

Class_name(const class_name &old_object);  

When Copy Constructor is called

Copy Constructor is called in the following scenarios:

When we initialize the object with another existing object of the same class type. For example, Student s1 = s2, where Student is the class.
When the object of the same class type is passed by value as an argument.
When the function returns the object of the same class type by value.
*/

#include<iostream>
using namespace std;

class A{
    public:

    int x;
    A(int v){  // parameterized constructor
        x = v;
    }
    A(A &y){  // copy constructor
        x = y.x;
    }
};

int main(){

    A a1(20);    // calling the parameterized constructor
    A a2(a1);   // calling the copy constructor

    cout << a1.x << endl;   // 20
    cout << a2.x;         // 20
    
    return 0;
}