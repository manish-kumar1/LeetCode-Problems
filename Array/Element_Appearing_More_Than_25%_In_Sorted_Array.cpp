/*
Element Appearing more then 25% in Sorted Array

Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.

Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6
Example 2:

Input: arr = [1,1]
Output: 1
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 105
*/

#include<iostream>
#include<vector>
using namespace std;

int AppearingElement(vector<int> &nums){
    int n = nums.size();
    if(n < 4){
        return nums[0];
    }
    int quarter = n / 4;
    for(int i = 0; i < n; i++){
        if(nums[i] == nums[i+quarter]){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;

    int temp = 0;
    vector<int> nums;

    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }

    int ans = AppearingElement(nums);
    cout << ans;

    return 0;
}