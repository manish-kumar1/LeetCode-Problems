
#include<iostream>
#include<vector>
using namespace std;

vector<int> function(vector<int> &nums){

    vector<int> ans;
    int temp = nums[0];
    ans.push_back(temp);
    for(int i = 1; i < nums.size(); i++){
        int t = temp + nums[i];
        ans.push_back(t);
        temp = t;
    }
    return ans;
}
int main(){

    int n;
    cin >> n;

    int t = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> t;
        nums.push_back(t);
    }
    vector<int> ans = function(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}