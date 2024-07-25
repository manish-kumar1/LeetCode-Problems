
// problem arr[] = {2, 3, 1, 1, 4, 2, 4, 5, 2}
// output = 2

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums){
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    int maxi = 0;
    int ans = 0;
    int temp = 0;
    for(auto x : mp){
        maxi = max(maxi, x.second);
        if(maxi > temp){
            ans = x.first;
            temp = maxi;
        }
    }
    return ans;
}
int main(){

    int n;
    cin >> n;

    int vt;
    vector<int> nums;
    for(int i = 0; i < n; i++){

        cin >> vt;
        nums.push_back(vt);
    }
    int ans = solve(nums);
    cout << ans;

    return 0;
}