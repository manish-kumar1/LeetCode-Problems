/*
Q. Two Sum 
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<int> TwoSum(vector<int> &nums, int target){
    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        int remain = target - nums[i];
        if(mp.find(remain) != mp.end()){
            return {mp[remain], i};
        }
        mp[nums[i]] = i;
    }
    return {};
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
    int target;
    cin >> target;
    vector<int> ans = TwoSum(nums, target);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}