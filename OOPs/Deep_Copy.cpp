/*
Deep copy

Deep copy dynamically allocates the memory for the copy and then copies the actual value, both the source and copy have distinct memory locations. 
In this way, both the source and copy are distinct and will not share the same memory location. 
Deep copy requires us to write the user-defined constructor.

*/

#include<iostream>
using namespace std;

class Demo{

    public:
    int a;
    int b;
    int *p;

    Demo(){
        p = new int;
    }
    Demo(Demo &d){
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }
    void setData(int x, int y, int z){
        a = x;
        b = y;
        *p = z;
    }
    void showData(){
        cout << a << " " << b << " " << *p << endl;
    }
};
int main(){

    Demo d1;
    d1.setData(1, 2, 4);

    Demo d2 = d1;
    d2.showData();

    return 0;
}


/*

https://static.javatpoint.com/cpp/images/cpp-copy-constructor4.png

In the above case, a programmer has defined its own constructor, therefore the statement Demo d2 = d1; calls the copy constructor defined by the user. 
It creates the exact copy of the value types data and the object pointed by the pointer p. Deep copy does not create the copy of a reference type variable.
*/