/*
Q. Special Positions in a Binary Matrix

Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).

Example 1:

Input: mat = [[1,0,0],[0,0,1],[1,0,0]]
Output: 1
Explanation: (1, 2) is a special position because mat[1][2] == 1 and all other elements in row 1 and column 2 are 0.
Example 2:

Input: mat = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3
Explanation: (0, 0), (1, 1) and (2, 2) are special positions.
 
Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 100
mat[i][j] is either 0 or 1.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int getColumnSum(const vector<vector<int>> &mat, int colIdx){
    int sum = 0;
    for(const auto& row : mat){
        sum += row[colIdx];
    }
    return sum;
}

int numSpecial(vector<vector<int>> &mat){
    int special = 0;
    for(const auto& row : mat){
        if(accumulate(row.begin(), row.end(), 0) == 1){
            int colIdx = distance(row.begin(), find(row.begin(), row.end(), 1));
            special += getColumnSum(mat, colIdx) == 1;
        }
    }
    return special;
}
int main(){

    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int ans = numSpecial(mat);
    cout << "Output : " << ans;

    return 0;
}