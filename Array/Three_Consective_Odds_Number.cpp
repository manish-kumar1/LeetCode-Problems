/*
Q. Three Consecutive Odds Number

Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.

Example 2:

Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
 
Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000

*/

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &nums){

    int count = 0;
    int maxi = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 != 0){
            count++;
            maxi = max(maxi, count);
            if(maxi >= 3){
                return true;
            }
        }
        else{
            count = 0;
        }
    }
    return false;
}
int main(){

    int n;
    cin >> n;

    int vt;
    vector<int> nums;

    for(int i = 0; i < n; i++){
        cin >> vt;
        nums.push_back(vt);
    }
    bool ans = solve(nums);
    cout << ans;

    return 0;
}