/*
Q. Sort an Array

Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessairly unique.
 
Constraints:

1 <= nums.length <= 5 * 104
-5 * 104 <= nums[i] <= 5 * 104
*/


#include<bits/stdc++.h>
using namespace std;

void merge(int low, int mid, int high, vector<int> &nums) {
    if (low >= high) 
    return;
    int l = low, r = mid + 1, k = 0, size = high - low + 1;
    vector<int> sorted(size, 0);
    while (l <= mid and r <= high)
        sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
    while (l <= mid) 
        sorted[k++] = nums[l++];
    while (r <= high) 
        sorted[k++] = nums[r++];
    for (k = 0; k < size; k++)
        nums[k + low] = sorted[k];
}

void mergeSort(vector<int>& nums, int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(start, mid, end, nums);
    }
}

vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size()-1);
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
    vector<int> ans = sortArray(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}