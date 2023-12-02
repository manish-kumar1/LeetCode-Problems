/*
Q. Majority Element 2

Given an integer array of size n, 
find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:

Input: nums = [3,2,3]
Output: [3]

Example 2:

Input: nums = [1]
Output: [1]

Example 3:

Input: nums = [1,2]
Output: [1,2]
 
Constraints:
1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement2(vector<int> &nums){
    
    sort(nums.begin(), nums.end());
    int n = nums.size();
    unordered_map<int, int> mp;
    int front = INT_MIN;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        mp[nums[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(mp[nums[i]] > n/3){
            if(front == nums[i]){

            }
            else{
                ans.push_back(nums[i]);
                front = nums[i];
            }
        }
    }
    return ans;
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
    vector<int> ans = majorityElement2(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}