#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() = 0;
};
class Derived : public Base{
    public:
    void show(){
        cout << "Derived class derived from the Base class : " << endl;
    }
};
int main(){
    Base* btr;
    Derived dtr;
    btr = &dtr;
    btr->show();

    return 0;
}