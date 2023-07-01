
#include<iostream>
using namespace std;

void fun(int a){
    cout << a << endl;
}
void fun(float a){
    cout << a << endl;
}
int main(){

    fun(10);
    // fun(2.5);  // error: call of overloaded 'fun(double)' is ambiguous

    // resolved error 
    fun(2.5f);   // define as float value
    
    return 0;
}