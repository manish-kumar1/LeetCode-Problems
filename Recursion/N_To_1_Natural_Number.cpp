#include<iostream>
using namespace std;

void fun(int n){
    // base case
    if(n == 0){
        return;
    }
    cout << n << " ";
    fun(n-1);
}
int main(){
    
    int n;
    cin >> n;

    fun(n);

    return 0;
}