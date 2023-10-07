#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int ReverseInteger(int n){

    int result = 0;
    while(n != 0){

        int digit = n % 10;
        
        if((result > INT_MAX /10) || (result < INT_MIN / 10)){
            return 0;
        }
        result = (result * 10) + digit;
        n = n / 10;
    }
    return result;

}
int main(){

    int n;
    cin >> n;

    int ans = ReverseInteger(n);
    cout << ans;

    return 0;
}