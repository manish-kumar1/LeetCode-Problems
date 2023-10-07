#include<iostream>
#include<vector>
using namespace std;

vector<int> RotateByOnePlace(vector<int> &nums){
    int temp = nums[0];
    for(int i = 0; i < nums.size()-1; i++){
        nums[i] = nums[i+1];
    }
    nums[nums.size()-1] = temp;
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
    vector<int> ans = RotateByOnePlace(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}