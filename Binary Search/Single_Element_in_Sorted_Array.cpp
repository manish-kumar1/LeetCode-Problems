/*
Q. Single Element in Sorted Array

You are given a sorted array consisting of only integers where every element appears exactly twice, 
except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 
Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

Example 2:
Input: nums = [3,3,7,7,10,11,11]
Output: 10
 
Constraints:
1 <= nums.length <= 105
0 <= nums[i] <= 105
*/

#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int> &nums){
    int low = 0;
    int high = nums.size() - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        bool isEven;

        if ((high - mid) % 2 == 0)
        {
            isEven = true;
        }
        else
        {
            isEven = false;
        }

        if (nums[mid] == nums[mid + 1])
        {
            if (isEven)
            {
                low = mid + 2;
            }
            else
            {
                high = mid - 1;
            }
        }
        else
        {
            if (isEven)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return nums[high];
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
    int ans = singleElement(nums);
    cout << ans;

    return 0;
}