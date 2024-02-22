/*
Q. Closest to the Right

Given an array of n numbers, sorted in non-decreasing order, and k queries. For each query, print the minimum index of an array element not less than the given one.

Input

The first line of the input contains integers n and k (0<n,k≤105), the length of the array and the number of queries. The second line contains n elements of the array, sorted in non-decreasing order. 
The third line contains k queries. All array elements and queries are integers, each of which does not exceed 2⋅109 in absolute value.

Output

For each of the k queries, print the minimum index of an array element not less than the given one. If there are none, print n+1.

Example

input

5 5
3 3 5 8 9
2 4 8 1 10

output
1
3
4
1
6
*/

#include <bits/stdc++.h>
using namespace std;
 
int solve(vector<int> &nums, int k){
    int left = 0;
    int right = nums.size();
    while(left < right){
        int mid = left + (right - left) / 2;
        if(nums[mid] >= k){
            right = mid;
        }
        else{
            left = mid + 1;
        }
    }
    return left + 1;
}
int main() {
    
    int n, t;
    cin >> n >> t;
    
    vector<int> nums;
    int e = 0;
    for(int i = 0; i < n; i++){
        cin >> e;
        nums.push_back(e);
    }
    while(t--){
        int k;
        cin >> k;
        
        int ans = solve(nums, k);
        cout << ans << endl;
    }
 
    return 0;
}