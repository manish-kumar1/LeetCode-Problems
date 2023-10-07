#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int> &nums){
    int largest = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    return largest;
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
    int ans = largestElement(nums);
    cout << ans;

    return 0;
}