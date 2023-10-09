/*
Q. Search in 2D Matrix
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 
Constraints:
m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/


#include<iostream>
#include<vector>
using namespace std;

bool matrixSearch(vector<vector<int>> &matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();

    int i = 0;
    int j = n - 1;
    while(i < m && j >= 0){
        int mid = i + (j - i) / 2;
        if(matrix[i][j] == target){
            return true;
        }
        else if(matrix[i][j] < target){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}
int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;

    bool ans = matrixSearch(arr, target);
    cout << ans <<" ";
    
    return 0;
}