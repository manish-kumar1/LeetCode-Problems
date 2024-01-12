/*
Q. Ambiquity in Multiple Inheritance

Ambiguity can be occurred in using the multiple inheritance when a function with the same name occurs in more than one base class.
*/

#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "Class A " << endl;
    }
};
class B{
    public:
    void display(){
        cout << "Class B " << endl;
    }
};
class C : public A, public B{
    public:
    void view(){
        display();
    }
};

int main(){

    C c;
    c.view();
    return 0;
}

// error: reference to 'display' is ambiguous
//           display();


// The above issue can be resolved by using the class resolution operator with the function. In the above example, the derived class code can be rewritten as:

/*
class C : public A, public B{
    public:
    void view(){
        A::display();   // Calling the display() function of class A. 
        B::display();   // Calling the display() function of class B.
    }
};
*/