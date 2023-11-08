/*
Q. Sing of The Product of an Array

There is a function signFunc(x) that returns:
1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).

Example 1:

Input: nums = [-1,-2,-3,-4,3,2,1]
Output: 1
Explanation: The product of all values in the array is 144, and signFunc(144) = 1

Example 2:

Input: nums = [1,5,0,2,-3]
Output: 0
Explanation: The product of all values in the array is 0, and signFunc(0) = 0

Example 3:

Input: nums = [-1,1,-1,1,-1]
Output: -1
Explanation: The product of all values in the array is -1, and signFunc(-1) = -1
 

Constraints:
1 <= nums.length <= 1000
-100 <= nums[i] <= 100
*/

#include<iostream>
#include<vector>
using namespace std;
int arraySign(vector<int> &nums){
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
            count++;
        }
        else if(nums[i] == 0){
            return 0;
        }
    }
    if(count & 1){
        return -1;
    }
    return 1;
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
    int ans = arraySign(nums);
    cout << ans;

    return 0;
}