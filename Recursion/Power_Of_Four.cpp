/*
Q. Power of Four

Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

Example 1:
Input: n = 16
Output: true

Example 2:
Input: n = 5
Output: false

Example 3:
Input: n = 1
Output: true
 
Constraints:
-231 <= n <= 231 - 1
*/

#include<iostream>
using namespace std;
bool isPowerOfFour(int n){
    if(n == 0){
        return false;
    }
    if(n == 1){
        return true;
    }
    return n % 4 == 0 && isPowerOfFour(n/4);
}
int main(){
    int n;
    cin >> n;

    bool ans = isPowerOfFour(n);
    cout << ans;

    return 0;
}