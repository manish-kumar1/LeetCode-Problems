/*
Q. Roteta Array
Given an integer array nums, rotate the array to the right by k steps, 
where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 
Constraints:
1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 
Follow up:
Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> &nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}
void rotetaArray(vector<int> &nums, int k){
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin()+n-k);
    reverse(nums.begin()+n-k, nums.end());
    reverse(nums.begin(), nums.end());
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
    int k;
    cin >> k;
    rotetaArray(nums, k);
    printArray(nums);
    return 0;
}