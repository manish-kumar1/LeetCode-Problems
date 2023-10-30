/*
Q. Sum of Squares Number

Given a non-negative integer n, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: n = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

Example 2:

Input: n = 3
Output: false
 
Constraints:

0 <= c <= 231 - 1
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
bool judgeSquareSum(int n){
    int low = 0;
    int high = sqrt(n);
    while(low <= high){
        ll first = low * low;
        ll second = high * high;
        if(first + second == (ll)n){
            return true;
        }
        else if(first + second > (ll)n){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;

    bool ans = judgeSquareSum(n);
    cout << ans;

    return 0;
}