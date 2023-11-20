#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    while(n != 0){
        int digit = n%10;
        sum = sum + digit;
        n /= 10;
    }
    return sum;
}
int main(){

    int n;
    cin >> n;

    int ans = sum(n);
    cout << ans;

    return 0;
}