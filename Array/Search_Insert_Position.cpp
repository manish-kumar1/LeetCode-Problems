/*
Q. Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 
Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/

#include<iostream>
#include<vector>
using namespace std;

int SearchInsertPosition(vector<int> &nums, int target){
    
    int ans = -1;
    if(target < nums[0]){
        return 0;
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < target){
            ans = i + 1;
        }
        else if(nums[i] == target){
            return i;
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
    int target;
    cin >> target;

    int ans = SearchInsertPosition(nums, target);
    cout << ans;

    return 0;
}