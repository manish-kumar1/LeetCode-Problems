#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int missingNumber(vector<int> &nums){

    sort(nums.begin(), nums.end());
    int ans = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == ans) {
            ans++;
        }
    }
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
    int ans = missingNumber(nums);
    cout << ans;

    return 0;
}