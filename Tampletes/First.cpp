

#include<iostream>
using namespace std;

template <typename myType> void display(myType x){
    cout << "you have passes : " << x << endl;
}
int main(){

    display(20);
    display(23.13453);
    display("Hello Manish");
    
    return 0;
}

