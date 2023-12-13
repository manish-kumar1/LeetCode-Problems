/*
Q. Subarray With 0 Sum

Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum. You just need to return true/false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code.

Example 1:

Input:
n = 5
arr = {4,2,-3,1,6}
Output: 
Yes
Explanation: 
2, -3, 1 is the subarray with sum 0.
Example 2:

Input:
n = 5
arr = {4,2,0,1,6}
Output: 
Yes
Explanation: 
0 is one of the element in the array so there exist a subarray with sum 0.
Your Task:
You only need to complete the function subArrayExists() that takes array and n as parameters and returns true or false.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 <= n <= 104
-105 <= a[i] <= 105
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;

bool subArraysExists(vector<int> &nums){

    map<int, int> mp;
    int a = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0) {
            return true;
        }
        a = a + nums[i];
        if(mp.find(a) != mp.end() || a == 0) {
            return true;;
        }
        else{
            mp[a]++;
        }
    } 
    return false;
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
    bool ans = subArraysExists(nums);
    cout << ans;

    return 0;
}