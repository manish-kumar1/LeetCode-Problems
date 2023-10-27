/*
Q. Minimize Maximum of Array

You are given a 0-indexed array nums comprising of n non-negative integers.

In one operation, you must:

Choose an integer i such that 1 <= i < n and nums[i] > 0.
Decrease nums[i] by 1.
Increase nums[i - 1] by 1.
Return the minimum possible value of the maximum integer of nums after performing any number of operations.

Example 1:
Input: nums = [3,7,1,6]
Output: 5
Explanation:
One set of optimal operations is as follows:
1. Choose i = 1, and nums becomes [4,6,1,6].
2. Choose i = 3, and nums becomes [4,6,2,5].
3. Choose i = 1, and nums becomes [5,5,2,5].
The maximum integer of nums is 5. It can be shown that the maximum number cannot be less than 5.
Therefore, we return 5.

Example 2:
Input: nums = [10,1]
Output: 10
Explanation:
It is optimal to leave nums as is, and since 10 is the maximum value, we return 10.
 
Constraints:
n == nums.length
2 <= n <= 105
0 <= nums[i] <= 109
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

bool isValid(vector<int> &nums, int maxMid){
    vector<ll> arr(nums.begin(), nums.end());
    for(int i = 0; i < nums.size()-1; i++){
        if(arr[i] > maxMid){
            return false;
        }
        ll buffer = maxMid - arr[i];
        arr[i+1] = arr[i+1] - buffer;
    }
    return arr[nums.size()-1] <= maxMid;
}
int minimizeArrayValue(vector<int> &nums){
    int maxLeft = 0;
    int maxRight = *max_element(nums.begin(), nums.end());
    int result = 0;
    while(maxLeft <= maxRight){
        int maxMid = maxLeft + (maxRight - maxLeft) / 2;
        if(isValid(nums, maxMid)){
            result = maxMid;
            maxRight = maxMid - 1;
        }
        else{
            maxLeft = maxMid + 1;
        }
    }
    return result;
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

    int ans = minimizeArrayValue(nums);
    cout << ans;
    return 0;
}