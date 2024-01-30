#include<iostream>
using namespace std;

template <class type1, class type2>

type2 maxi(type1 a, type2 b){
    if(a > b)
        return a;
    else
        return b;
}
int main(){

    cout << maxi(10, 34.23);
    cout << endl << maxi(10.23, 23.45);
    cout << endl << maxi('A', 'B');

    return 0;
}