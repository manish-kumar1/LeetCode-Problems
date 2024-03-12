/*
Q. Intersection of Two Arrays

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 
Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums1, vector<int> &nums2){
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0, j = 0;
    set<int> st;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] == nums2[j]){
            st.insert(nums1[i]);
            j++;
            i++;
        }
        else if(nums1[i] < nums2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    vector<int> ans;
    for(auto & x : st){
        ans.push_back(x);
    }
    return ans;
}
int main(){
    int n, m;
    cin >> n >> m;

    int tp = 0;
    vector<int> nums1;
    for(int i = 0; i < n; i++){
        cin >> tp;
        nums1.push_back(tp);
    }
    int tx = 0;
    vector<int> nums2;
    for(int i = 0; i < m; i++){
        cin >> tx;
        nums2.push_back(tx);
    }
    vector<int> ans = solve(nums1, nums2);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}