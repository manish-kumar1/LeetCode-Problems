/*
Q. Find Triplets with Zero Sum

Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

Note: Return 1, if there is at least one triplet following the condition else return 0.

Example 1:
Input: n = 5, arr[] = {0, -1, 2, -3, 1}
Output: 1
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.

Example 2:
Input: n = 3, arr[] = {1, 2, 3}
Output: 0
Explanation: No triplet with zero sum exists. 

Your Task:
You don't need to read input or print anything. Your task is to complete the boolean function 
findTriplets() which takes the array arr[] and the size of the array (n) as inputs and print 1 if the function returns true else print 0 if the function returns false. 

Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 104
-106 <= Ai <= 106
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
bool findTriplets(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        int k = i + 1;
        int j = n - 1;
        while(k < j){
            if(nums[i] + nums[k] + nums[j] == 0){
                return true;
            }
            else if(nums[i] + nums[k] + nums[j] > 0){
                j--;
            }
            else{
                k++;
            }
        }
    }
    return false;
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
    bool ans = findTriplets(nums);
    cout << ans;

    return 0;
}