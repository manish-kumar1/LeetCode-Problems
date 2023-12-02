/*
Q. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
Constraints:
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums){

    int n = nums.size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[nums[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(mp[nums[i]] > n/2){
            return nums[i];
        }
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
    int ans = majorityElement(nums);
    cout << ans;

    return 0;
}