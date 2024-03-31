#include<iostream>
using namespace std;

void fun(int n){
    if(n == 0){
        cout << "Happy Birthday" << endl;
        return;
    }
    cout << n << " Days left" << endl;
    fun(n-1);
}

int main(){

    int n;
    cin >> n;

    fun(n);

    return 0;
}