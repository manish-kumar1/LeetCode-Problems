/*
Q. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
 
Constraints:
0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/

#include<iostream>
#include<vector>
using namespace std;
int lastOccur(vector<int> &nums, int key){
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int firstOccur(vector<int> &nums, int key){
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(nums[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
pair<int, int> SearchRange(vector<int> &nums, int key){
    pair<int, int> p;
    p.first = firstOccur(nums, key);
    p.second = lastOccur(nums, key);

    return p;
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
    int key;
    cin >> key;
    pair<int, int> ans = SearchRange(nums, key);
    cout << ans.first << " " << ans.second;
    return 0;
}