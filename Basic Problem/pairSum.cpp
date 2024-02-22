#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pairSum(vector<int> &nums, int key){
    
    vector<vector<int>> ans;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j]){
                vector<int> temp;
                temp.push_back(min(nums[i], nums[j]));
                temp.push_back(max(nums[i], nums[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int v = 0;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            cin >> v;
            nums.push_back(v);
        }
        int key;
        cin >> key;
        vector<vector<int>> result = pairSum(nums, key);

        for(int i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}