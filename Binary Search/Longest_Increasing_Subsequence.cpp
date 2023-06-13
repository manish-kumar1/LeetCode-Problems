/*
Q. Longest Increasing Subsequence 

Given an integer array nums, return the length of the longest strictly increasing 
subsequence
.
Example 1:

Input: nums = [10,9,2,5,3,7,101,18]
Output: 4

Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

Example 2:

Input: nums = [0,1,0,3,2,3]
Output: 4

Example 3:

Input: nums = [7,7,7,7,7,7,7]
Output: 1
 

Constraints:

1 <= nums.length <= 2500
-104 <= nums[i] <= 104
*/

#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int> &nums){

    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){

        auto it = lower_bound(ans.begin(), ans.end(), nums[i]);  // just greater than or equal of nums[i]

        if(it == ans.end()){
            ans.push_back(nums[i]);  //  greater fo push it
        }
        else{
            *it = nums[i];   // replace with nums[i]
        }
    }
    return ans.size();
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

    int ans = lengthOfLIS(nums);
    cout << ans;

    return 0;
}