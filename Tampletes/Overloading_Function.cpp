
#include<iostream>
using namespace std;

template <class X> 
void fun(X a){
    cout << "value of a is : " << a << endl;
}
template <class X, class Y>
void fun(X a, Y b){
    
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
}
int main(){

    fun(29);
    fun(10, 34.23);

    return 0;
}