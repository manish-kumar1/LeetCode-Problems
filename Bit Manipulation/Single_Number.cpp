/*
Q. Single Number
Given a non-empty array of integers nums, 
every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1
 
Constraints:
1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/

#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int> &nums){
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        ans = ans ^ nums[i];
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
    int ans = singleNumber(nums);
    cout << ans;

    return 0;
}