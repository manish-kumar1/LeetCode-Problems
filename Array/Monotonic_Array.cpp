/*
Q. Monotonic Array

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:

Input: nums = [1,2,2,3]
Output: true

Example 2:

Input: nums = [6,5,4,4]
Output: true
Example 3:

Input: nums = [1,3,2]
Output: false
 
Constraints:

1 <= nums.length <= 105
-105 <= nums[i] <= 105
*/

#include<iostream>
#include<vector>
using namespace std;
bool isMonotonic(vector<int> &nums){
    bool increment = true;
    bool decrement = true;
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] < nums[i+1]){
            increment = false;
        }
        if(nums[i] > nums[i+1]){
            decrement = false;
        }
    }
    return increment || decrement;
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
    bool ans = isMonotonic(nums);
    cout << ans;

    return 0;
}

