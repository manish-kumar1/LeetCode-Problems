
/*
Q. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){

    // for(int i = 0; i <= 30; i++){
    //     int ans = pow(2, i);
    //     if(ans == n){
    //         return true;
    //     }
    // }
    // return false;

    if(n == 0){
        return false;
    }
    if(n == 1){
        return true;
    }
    while(n != 1){

        if(n & 1){
            return false;
        }
        n = n >> 1;
    }
    return true;
}
int main(){

    int n;
    cin >> n;

    bool ans = isPowerOfTwo(n);
    cout << ans;

    return ans;
}