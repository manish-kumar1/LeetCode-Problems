/*
Q. Sort Color

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.


Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 
Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
 
Follow up: Could you come up with a one-pass algorithm using only constant extra space?

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> sortColors(vector<int> &nums){

    int start = 0;
    int mid = 0;
    int end = nums.size()-1;

    while(mid <= end){
        if(nums[mid] == 0){
            swap(nums[mid], nums[start]);
            mid++;
            start++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[start], nums[end]);
            end--;
        }
    }
    return nums;
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
    vector<int> ans = sortColors(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}