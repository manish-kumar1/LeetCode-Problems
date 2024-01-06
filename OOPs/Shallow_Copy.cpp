/*
Two types of copies are produced by the constructor:

Shallow copy
Deep copy

Shallow Copy

The default copy constructor can only produce the shallow copy.
A Shallow copy is defined as the process of creating the copy of an object by copying data of all the member variables as it is.

*/

#include<iostream>
using namespace std;

class Demo{

    int a;
    int b;
    int *p;

    public:
    Demo(){

        p = new int;
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

    Demo d1;  // creating object d1
    d1.setData(10, 3, 6);  // calling setData method

    Demo d2 = d1;   // creating copy constructor 
    d2.showData();

    return 0;
}

/*

https://static.javatpoint.com/cpp/images/cpp-copy-constructor3.png

In the above case, a programmer has not defined any constructor, therefore, the statement Demo d2 = d1; calls the default constructor defined by the compiler. 
The default constructor creates the exact copy or shallow copy of the existing object. 
Thus, the pointer p of both the objects point to the same memory location. 
Therefore, when the memory of a field is freed, the memory of another field is also automatically freed as both the fields point to the same memory location. 
This problem is solved by the user-defined constructor that creates the Deep copy.
*/