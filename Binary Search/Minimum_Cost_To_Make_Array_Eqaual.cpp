/*
Q. Minimum Cost To Make Array Equal

You are given two 0-indexed arrays nums and cost consisting each of n positive integers.

You can do the following operation any number of times:

Increase or decrease any element of the array nums by 1.
The cost of doing one operation on the ith element is cost[i].

Return the minimum total cost such that all the elements of the array nums become equal.

Example 1:
Input: nums = [1,3,5,2], cost = [2,3,1,14]
Output: 8
Explanation: We can make all the elements equal to 2 in the following way:
- Increase the 0th element one time. The cost is 2.
- Decrease the 1st element one time. The cost is 3.
- Decrease the 2nd element three times. The cost is 1 + 1 + 1 = 3.
The total cost is 2 + 3 + 3 = 8.
It can be shown that we cannot make the array equal with a smaller cost.

Example 2:
Input: nums = [2,2,2,2,2], cost = [4,2,8,1,3]
Output: 0
Explanation: All the elements are already equal, so no operations are needed.
 
Constraints:
n == nums.length == cost.length
1 <= n <= 105
1 <= nums[i], cost[i] <= 106
Test cases are generated in a way that the output doesn't exceed 253-1
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;
ll getCost(vector<int> &nums, vector<int> &cost, int target){
    ll result = 0;
    for(int i = 0; i < nums.size(); i++){
        result += (ll) abs(nums[i] - target) * cost[i];
    }
    return result;
}
long long minimumCost(vector<int> &nums, vector<int> &cost){
    ll answer = INT_MAX;
    int left = *min_element(nums.begin(), nums.end());
    int right = *max_element(nums.begin(), nums.end());

    while(left <= right){
        int mid = left + (right - left) / 2;

        ll cost1 = getCost(nums, cost, mid);
        ll cost2 = getCost(nums, cost, mid+1);

        answer = min(cost1, cost2);
        if(cost1 > cost2){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return answer == INT_MAX ? 0 : answer;
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
    int t = 0;
    vector<int> cost;
    for(int i = 0; i < n; i++){
        cin >> t;
        cost.push_back(t);
    }
    long long ans = minimumCost(nums, cost);
    cout << ans;
    return 0;
}