
#include<iostream>
using namespace std;

template <class T1, class T2>

class Demo{

    T1 a;
    T2 b;

    public:
    Demo(T1 x, T2 y){
        a = x;
        b = y;
    }

    void display(){
        cout << "value of a and b are : " << a << ", " << b << endl; 
    }
};

int main(){
    
    Demo <int, float> s(12, 23.25);
    s.display();

    return 0;
}