/*
Q. Rotation

Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

Example 1:

Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.

Example 2:
Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0
Explanation: The given array is not rotated.
Your Task:
Complete the function findKRotation() which takes array arr and size n, as input parameters and returns an integer representing the answer. You don't to print answer or take inputs.

Expected Time Complexity: O(log(N))
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <=105
1 <= Arri <= 107
*/

#include<iostream>
#include<vector>
using namespace std;
int Rotation(vector<int> &nums){
    int low = 0;
    int high = nums.size()-1;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(nums[mid] < nums[high]){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return high;
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
    int ans = Rotation(nums);
    cout << ans;

    return 0;
}