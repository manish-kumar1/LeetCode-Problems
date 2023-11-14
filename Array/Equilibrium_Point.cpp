/*
Q. Equilibrium Point

Given an array nums of n positive numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is an index (or position) such that the sum of all elements before that index is same as sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Example 1:

Input: 
n = 5 
nums[] = {1,3,5,2,2} 
Output: 
3 
Explanation:  
equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 

Example 2:

Input:
n = 1
nums[] = {1}
Output: 
1
Explanation:
Since there's only element hence its only the equilibrium point.
Your Task:
The task is to complete the function equilibriumPoint() which takes the array and n as input parameters and returns the point of equilibrium. 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 105
1 <= A[i] <= 109
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int EquilibriumPoint(vector<int> &nums){
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    for(int i = 0; i < nums.size(); i++){
        rightSum = rightSum - nums[i];
        if(rightSum == leftSum){
            return i+1;
        }
        leftSum = leftSum + nums[i];
    }
    return -1;
}
int main(){
    int n;
    cin >> n;

    int v = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> v;
        nums.push_back(v);
    }
    int ans = EquilibriumPoint(nums);
    cout << ans;
    return 0;
}