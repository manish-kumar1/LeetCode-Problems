/*
Q. Find Peek Element

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, 
and return its index. If the array contains multiple peaks, 
return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, 
an element is always considered to be strictly greater 
than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

Example 1:
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

Example 2:
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 
Constraints:
1 <= nums.length <= 1000
-231 <= nums[i] <= 231 - 1
nums[i] != nums[i + 1] for all valid i.
*/

#include<iostream>
#include<vector>
using namespace std;

int PeekElement(vector<int> &nums){
    int n = nums.size();
    if(n == 1){
        return 0;
    }
    if(nums[0] > nums[1]){
        return 0;
    }
    if(nums[n-1] > nums[n-2]){
        return n-1;
    }
    for(int i = 1; i < n-1; i++){
        if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){
            return i;
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
    int ans = PeekElement(nums);
    cout << ans;

    return 0;
}