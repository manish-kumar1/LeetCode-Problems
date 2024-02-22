
#include<iostream>
#include<vector>
using namespace std;

int indexInMountainArray(vector<int> &nums){

    int start = 0;
    int end = nums.size() - 1;

    while(start < end){
        
        int mid = start + (end - start) / 2;
        if(nums[mid] < nums[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
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
    int ans = indexInMountainArray(nums);
    cout << ans;

    return 0;
}