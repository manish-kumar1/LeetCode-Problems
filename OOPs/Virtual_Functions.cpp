#include<iostream>
using namespace std;;

class A{
    int x;
    public:
    void display(){
        cout << "value  of x is : " << endl;
    }
};
class B : public A{
    int y;
    public:
    void display(){
        cout << "value of y is : " << endl;
    }
};
int main(){

    A* a;  // pointer of base class
    B b;   // object of derived class
    a = &b;
    a->display();  // late binding occurs
    
    return 0;
}