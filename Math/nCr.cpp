/*
Q. nCr

Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 
Example 2:

Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.
Your Task:
You do not need to take input or print anything. Your task is to complete the function nCr() which takes n and r as input parameters and returns nCr modulo 109+7..

Expected Time Complexity: O(n*r)
Expected Auxiliary Space: O(r)

Constraints:
1 ≤ n ≤ 1000
1 ≤ r ≤ 800
*/

#include<iostream>
using namespace std;
int nCr(int n, int r){
    if(n < r){
        return 0;
    }
    if(n == 0 || r == 0){
        return 1;
    }
    int dp[r+1] = {0};
    dp[0] = 1;
    int mod = 1e9+7;
    for(int i = 1; i <= n; i++){
        for(int j = min(r, n); j > 0; j--){
            dp[j] = (dp[j] + dp[j-1])%mod;
        }
    }
    return dp[r];
}
int main(){
    int n, r;
    cin >> n >> r;

    int ans = nCr(n, r);
    cout << ans;

    return 0;
}