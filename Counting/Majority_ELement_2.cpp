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
    int n = nums.size();
    vector<int> ans;
    int count1 = 0;
    int count2 = 0;
    int cnd1 = INT_MIN;
    int cnd2 = INT_MIN;
    int life1 = 0;
    int life2 = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == cnd1){
            life1++;
        }
        if(nums[i] == cnd2){
            life2++;
        }
        else if(life1 == 0){
            cnd1 = nums[i];
            life1 = 1;
        }
        else if(life2 == 0){
            cnd2 = nums[i];
            life2 = 1;
        }
        else{
            life1--;
            life2--;
        }
    }
    for(int i = 0; i < n; i++){
        if(cnd1 == nums[i]){
            count1++;
        }
        if(cnd2 == nums[i]){
            count2++;
        }
    }
    if(count1 > n/3){
        ans.push_back(cnd1);
    }
    if(count2 > n/3){
        ans.push_back(cnd2);
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