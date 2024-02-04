/*
Q. Kth Largest Element in an Array

Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
 
Constraints:
1 <= k <= nums.length <= 105
-104 <= nums[i] <= 104
*/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int findKthLargest(vector<int> &nums, int k){

    priority_queue<int, vector<int>, greater<>> pq;
    for(auto i : nums){
        pq.push(i);
    }
    while(pq.size() > k){
        pq.pop();
    }
    return pq.top();
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
    int k; cin >> k;

    int ans = findKthLargest(nums, k);
    cout << ans;

    return 0;
}