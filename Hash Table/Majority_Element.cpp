/*
Q. Majority Element
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

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
    int count = 0;
    int cnd = INT_MIN;
    int life = 0;
    
    for(int i = 0; i < n; i++){
        if(nums[i] == cnd){
            life++;
        }
        else if(life == 0){
            cnd = nums[i];
            life = 1;
        }
        else{
            life--;
        }
    }
    for(int i = 0; i < n; i++){
        if(nums[i] == cnd){
            count++;
        }
    }
    if(count > n/2){
        return cnd;
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