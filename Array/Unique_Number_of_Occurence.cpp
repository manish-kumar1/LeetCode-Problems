/*
Q. Unique Number of Occurence

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:

Input: arr = [1,2]
Output: false

Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 
Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool uniqueOccurence(vector<int> &nums){

    sort(nums.begin(), nums.end());
    int cnt = 1;
    int j = 1;
    vector<int> temp;

    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] == nums[j]){
            j++;
            cnt++;
            continue;
        }
        else if(nums[i] != nums[j]){
            temp.push_back(cnt);
            j += 1;
            cnt = 1;
            continue;
        }
        temp.push_back(cnt);
        cnt = 1;
    }
    temp.push_back(cnt);
    sort(temp.begin(), temp.end());
    for(int i = 0; i < temp.size()-1; i++){
        if(temp[i] == temp[i+1]){
            return false;
        }
    }
    return true;
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
    bool ans = uniqueOccurence(nums);
    cout << ans;

    return 0;
}