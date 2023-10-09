/*
Q. Integer Break
Given an integer n, break it into the sum of k positive integers, 
where k >= 2, and maximize the product of those integers.

Return the maximum product you can get.

Example 1:
Input: n = 2
Output: 1
Explanation: 2 = 1 + 1, 1 × 1 = 1.

Example 2:
Input: n = 10
Output: 36
Explanation: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36.
 
Constraints:
2 <= n <= 58
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int IntegerBreak(int n) {
    vector<int>dp(100);
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    for(int i = 4; i <= n; i++){
        int num = i;
        for(int j = 1; j <= num; j++){
            int x = j;
            int y = num-x;
            dp[i]=max({dp[i],x*y,dp[x]*y,x*dp[y],dp[x]*dp[y]});
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;

    int ans = IntegerBreak(n);
    cout << ans;

    return 0;
}