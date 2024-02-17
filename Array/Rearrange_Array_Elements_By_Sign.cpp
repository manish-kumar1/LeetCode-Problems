/*
Q. Rearrange Array Elements By Sign

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 
Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]

Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  

Example 2:

Input: nums = [-1,1]
Output: [1,-1]

Explanation:
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
 

Constraints:

2 <= nums.length <= 2 * 105
nums.length is even
1 <= |nums[i]| <= 105
nums consists of equal number of positive and negative integers.
 
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums){

    int n = nums.size();
    vector<int> ans(n, 0);
    
    int pos = 0;
    int neg = 1;
    for(int i = 0; i < n; i++){
        if(nums[i] >= 0){
            ans[pos] = nums[i];
            pos += 2;
        }
        else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    return ans;
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
    vector<int> ans = solve(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}