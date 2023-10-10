/*
Q. Fibonacci Number

The Fibonacci numbers, commonly denoted F(n) form a sequence, 
called the Fibonacci sequence, such that each number is the 
sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 
Constraints:
0 <= n <= 30
*/

#include<vector>
#include<iostream>
using namespace std;

int Solution(int n, vector<int> &DP){
    if(n <= 1){
        return n;
    }
    if(DP[n] != -1){
        return DP[n];
    }
    return DP[n] = Solution(n-1, DP) + Solution(n-2, DP);
}
int fibonacci(int n){

    if(n <= 1){
        return n;
    }
    vector<int> DP(n+1, -1);
    return Solution(n, DP);
}
int main(){
    int n;
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;

    return 0;
}