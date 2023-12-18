/*
Q. Maximum Product Difference Between Two Pairs

The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.


Example 1:

Input: nums = [5,6,2,7,4]
Output: 34
Explanation: We can choose indices 1 and 3 for the first pair (6, 7) and indices 2 and 4 for the second pair (2, 4).
The product difference is (6 * 7) - (2 * 4) = 34.
Example 2:

Input: nums = [4,2,5,9,7,4,8]
Output: 64
Explanation: We can choose indices 3 and 6 for the first pair (9, 8) and indices 1 and 5 for the second pair (2, 4).
The product difference is (9 * 8) - (2 * 4) = 64.
 

Constraints:

4 <= nums.length <= 104
1 <= nums[i] <= 104
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int maxProductDifference(vector<int> &nums){
    int fmax = 0, smax = 0;
    int fmin = INT_MAX, smin = INT_MAX;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < fmin) {
            smin = fmin;
            fmin = nums[i];
        }
        else if(nums[i] < smin){
            smin = nums[i];
        }
        if(nums[i] > fmax){
            smax = fmax;
            fmax = nums[i];
        }
        else if(nums[i] > smax){
            smax = nums[i];
        }
    }
    return (fmax * smax) - (fmin * smin);
}
int main(){

    int n;
    cin >> n;

    int temp = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    int ans = maxProductDifference(nums);

    cout << ans;

    return 0;
}