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
void maxHeapify(vector<int> &nums, int n, int i){
    
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n and nums[left] > nums[largest]){
        largest = left;
    }
    if(right < n and nums[right] > nums[largest]){
        largest = right;
    }
    if(largest != i){
        swap(nums[i], nums[largest]);
        maxHeapify(nums, n, largest);
    }
}
void heapSort(vector<int> &nums, int n){
    int startIndex = n / 2 - 1;
    for(int i = startIndex; i >= 0; i--){
        maxHeapify(nums, n, i);
    }
    for(int i = n-1; i >= 0; i--){
        swap(nums[0], nums[i]);
        maxHeapify(nums, i, 0);
    }
}
vector<int> sortArray(vector<int> &nums){
    heapSort(nums, nums.size());
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