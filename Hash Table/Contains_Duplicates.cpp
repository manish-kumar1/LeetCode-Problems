/*
Q. Contains Duplicates

Given an integer array nums, return true if any value appears at 
least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true

Example 2:
Input: nums = [1,2,3,4]
Output: false

Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

Constraints:
1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
bool isContainsDuplicates(vector<int> &nums){
    set<int> st;
    for(int i = 0; i < nums.size(); i++){
        if(st.find(nums[i]) != st.end()){
            return true;
        }
        else{
            st.insert(nums[i]);
        }
    }
    return false;
    // TLE
    // for(int i = 0; i < nums.size()-1; i++){
    //     for(int j = i+1; j < nums.size(); j++){
    //         if(nums[i] == nums[j]){
    //             return true;
    //         }
    //     }
    // }
    // return false;
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
    bool ans = isContainsDuplicates(nums);
    cout << ans;

    return 0;
}