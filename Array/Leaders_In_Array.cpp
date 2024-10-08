/*
Q. Leaders in Array

Given an array A of positive integers. Your task is to find 
the leaders in the array. An element of array is leader if 
it is greater than or equal to all the elements to its right 
side. The rightmost element is always a leader. 

Example 1:
Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.

Example 2:
Input:
n = 5
A[] = {1,2,3,4,0}
Output: 4 0
Explanation: 0 is the rightmost element
and 4 is the only element which is greater
than all the elements to its right.
Your Task:
You don't need to read input or print anything. The task is to complete the function leader() which takes array A and n as input parameters and returns an array of leaders in order of their appearance.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1 <= n <= 107
0 <= Ai <= 107
*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> leaders(vector<int> &nums){


    // cout << &nums[0] << endl;
    // cout << &nums[1] << endl;
    vector<int> ans;
    int leader = nums[nums.size() - 1];
    ans.push_back(leader);
    for(int i = nums.size()-2; i>=0; i--){
        if(nums[i] >= leader){
            ans.push_back(nums[i]);
            leader = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
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
    vector<int> ans = leaders(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}