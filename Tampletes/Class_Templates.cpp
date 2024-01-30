
#include<iostream>
using namespace std;

template <class T>  // single parameter

class A{
    public:

    T num1 = 5;
    T num2 = 4;

    void display(){
        
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
};

int main(){

    A <int> d;
    d.display();

    return 0;
}