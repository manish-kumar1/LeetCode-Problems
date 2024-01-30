#include<iostream>
using namespace std;

template <class type>

type maxi(type a, type b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout << "max no is : " << maxi(30, 23);
    cout << endl << "max no is : " << maxi(10.3, 30.5);
    cout << endl << "max char is : " << maxi('a', 'b');

    return 0;
}