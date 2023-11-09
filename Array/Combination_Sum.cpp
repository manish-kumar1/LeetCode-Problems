/*
Q. Combination Sum

Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Example 3:

Input: candidates = [2], target = 1
Output: []
 
Constraints:
1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of candidates are distinct.
1 <= target <= 40
*/

#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> result;
void LeetCode(vector<int> &candidates, int target, int i, int currentSum, vector<int> &temp){
    if(currentSum > target){
        return;
    }
    if(i == candidates.size()){
        if(currentSum == target){
            result.push_back(temp);
        }
        return;
    }
    currentSum = currentSum + candidates[i];
    temp.push_back(candidates[i]);
    LeetCode(candidates, target, i, currentSum, temp);
    currentSum = currentSum - candidates[i];
    temp.pop_back();
    LeetCode(candidates, target, i, currentSum, temp);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target){
    vector<int> temp;
    LeetCode(candidates, target, 0, 0, temp);

    return result;
}
int main(){
    int n;
    cin >> n;

    int v = 0;
    vector<int> candidates;
    for(int i = 0; i < n; i++){
        cin >> v;
        candidates.push_back(v);
    }
    int target; cout << "target = ";
    cin >> target;
    vector<vector<int>> ans = combinationSum(candidates, target);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}