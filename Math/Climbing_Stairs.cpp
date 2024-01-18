/*
Q. Climbing Stairs

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 
Constraints:
1 <= n <= 45

*/

#include<iostream>
using namespace std;

int climbStairs(int n){

    int a = 0;
    int b = 1;
    int temp;
    for(int i = 1; i <= n; i++){
        temp = a + b;
        a = b;
        b = temp;
    }
    return temp;
}
int main(){

    int n;
    cin >> n;

    int ans = climbStairs(n);
    cout << "Output : " << ans;

    return 0;
}