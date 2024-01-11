#include<iostream>
using namespace std;

class A{
    public:
    int A;
    void get_A(int n){
        A = n;
    }
};
class B{
    public:
    int x;
    void get_X(int n){
        x = n;
    }
};
class C : public B, public A{
    public:
    void display(){
        cout << "Value of A is : " << A << endl;
        cout << "Value of x is : " << x << endl;
        cout << "Multiple of A and x is : " << A*x << endl;
    }
};
int main(){
    C c;
    c.get_A(10);
    c.get_X(3);
    c.display();
    
    return 0;
}