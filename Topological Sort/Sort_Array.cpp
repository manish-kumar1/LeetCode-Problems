#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArray(vector<int> &nums){
    sort(nums.begin(), nums.end());
    return nums;
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
    vector<int> ans = sortArray(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}