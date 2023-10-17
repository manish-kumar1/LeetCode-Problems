/*
Q. Number of Ways to Stay in the Same Place After Some Steps

You have a pointer at index 0 in an array of size arrLen. At each step, you can move 1 position to the left, 1 position to the right in the array, or stay in the same place (The pointer should not be placed outside the array at any time).

Given two integers steps and arrLen, return the number of ways such that your pointer is still at index 0 after exactly steps steps. Since the answer may be too large, return it modulo 109 + 7.

Example 1:
Input: steps = 3, arrLen = 2
Output: 4
Explanation: There are 4 differents ways to stay at index 0 after 3 steps.
Right, Left, Stay
Stay, Right, Left
Right, Stay, Left
Stay, Stay, Stay

Example 2:
Input: steps = 2, arrLen = 4
Output: 2
Explanation: There are 2 differents ways to stay at index 0 after 2 steps
Right, Left
Stay, Stay

Example 3:
Input: steps = 4, arrLen = 2
Output: 8
 
Constraints:
1 <= steps <= 500
1 <= arrLen <= 106
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int n;
int temp[501][501];
int MOD = 1e9+7;
int toSolve(int index, int steps){
    if(index < 0 || index >= n){
        return 0;
    }
    if(steps == 0){
        return index == 0;
    }
    if(temp[index][steps] != -1){
        return temp[index][steps];
    }
    int result = toSolve(index+1, steps-1); // right
    result = (result + toSolve(index-1, steps-1)) % MOD; // left
    result = (result + toSolve(index, steps-1)) % MOD; // stay;

    return temp[index][steps] = result;
}
int numberOfWays(int steps, int arrLen){
    arrLen = min(arrLen, steps);
    n = arrLen;
    memset(temp, -1, sizeof(temp));
    return toSolve(0, steps);
}
int main(){
    
    int steps, arrLen;
    cin >> steps >> arrLen;

    int ans = numberOfWays(steps, arrLen);
    cout << ans;

    return 0;
}