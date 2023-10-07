#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &nums, int target){
    int start = 0;
    int end = nums.size()-1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
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
    int target;
    cin >> target;

    int ans = BinarySearch(nums, target);
    cout << ans;

    return 0;
}