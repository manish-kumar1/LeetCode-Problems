/*
Q. Set Mismatch

You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

 
Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]
 
Constraints:

2 <= nums.length <= 104
1 <= nums[i] <= 104
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> setMismatch(vector<int> &nums){

    int n = nums.size();
    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[nums[i]]++;
    }

    int duplicate;

    for(int i = 0; i < n; i++){

        if(mp[nums[i]] == 2){
            duplicate = nums[i];
            break;
        }
    }
    int missingNumber;

    int totalSum = accumulate(nums.begin(), nums.end(), 0);

    int sum = n * (n+1) / 2; // sum of n natural number
    totalSum = totalSum - duplicate;
    missingNumber = sum - totalSum;
    
    return {duplicate, missingNumber};
}
int main(){

    int n;
    cin >> n;

    int temp = 0;
    vector<int> nums;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    vector<int> ans = setMismatch(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
