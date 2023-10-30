/*
Q. Factorial Trilling Zeroes

Given an integer n, return the number of trailing zeroes in n!.

Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.

 
Example 1:

Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.

Example 2:

Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.

Example 3:

Input: n = 0
Output: 0
 
Constraints:
0 <= n <= 1040
*/

#include<iostream>
using namespace std;
int TrillingZeroes(int n){
    if(n < 5){
        return 0;
    }
    int count = 0;
    while(n / 5 > 0){
        count += n/5;
        n /= 5;
    }
    return count;
}
int main(){
    int n;
    cin >> n;

    int ans = TrillingZeroes(n);
    cout << ans;

    return 0;
}