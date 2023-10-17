/*
Q. Making A Large Island

You are given an n x n binary matrix grid. You are allowed to change at most one 0 to be 1.

Return the size of the largest island in grid after applying this operation.

An island is a 4-directionally connected group of 1s.

Example 1:
Input: grid = [[1,0],[0,1]]
Output: 3
Explanation: Change one 0 to 1 and connect two 1s, then we get an island with area = 3.

Example 2:
Input: grid = [[1,1],[1,0]]
Output: 4
Explanation: Change the 0 to 1 and make the island bigger, only one island with area = 4.

Example 3:
Input: grid = [[1,1],[1,1]]
Output: 4
Explanation: Can't change any 0 to 1, only one island with area = 4.
 
Constraints:
n == grid.length
n == grid[i].length
1 <= n <= 500
grid[i][j] is either 0 or 1.
*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void putid(int idx, int i, int j, vector<vector<int>> &grid, int m, int n, int& count){
    if(i < 0 || j < 0 || i >= m || j >= n) return;
    else if(grid[i][j] > 1 || grid[i][j]==0)return;
    else{
        grid[i][j] = idx;
        putid(idx, i+1, j, grid, m, n, count);
        putid(idx, i-1, j, grid, m, n, count);
        putid(idx, i, j+1, grid, m, n, count);
        putid(idx, i, j-1, grid, m, n, count);
        count++;
    }
}
bool checkvalid(int i, int j,int m, int n){
    if(i < 0 || j < 0 || i >= m || j >= n){
        return false;
    }
    return true;
}
int largeIsland(vector<vector<int>> &grid){
    int m = grid.size();
    int n = grid[0].size();
    map<int, int> mp;
    int idx = 2;
    int Max = INT_MIN;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                int count  = 0;
                putid(idx, i, j, grid, m, n, count);
                mp.insert({idx, count});
                idx++;
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 0){
                int sum = 0;
                set<int> st;
                if(checkvalid(i-1, j, m, n) && grid[i-1][j] > 1 && st.find(grid[i-1][j])== st.end()){
                    st.insert(grid[i-1][j]);
                    auto it = mp.find(grid[i-1][j]);
                    sum += it->second;
                }
                if(checkvalid(i+1, j, m, n) && grid[i+1][j] > 1 && st.find(grid[i+1][j])== st.end()){
                    st.insert(grid[i+1][j]);
                    auto it = mp.find(grid[i+1][j]);
                    sum += it->second;
                }
                if(checkvalid(i, j+1, m, n) && grid[i][j+1] > 1 && st.find(grid[i][j+1])== st.end()){
                    st.insert(grid[i][j+1]);
                    auto it = mp.find(grid[i][j+1]);
                    sum += it->second;
                }
                if(checkvalid(i, j-1, m, n) && grid[i][j-1] > 1 && st.find(grid[i][j-1])== st.end()){
                    st.insert(grid[i][j-1]);
                    auto it = mp.find(grid[i][j-1]);
                    sum += it->second;
                }
                Max = max(Max, sum+1);
            }
        }
    }
    return (Max == INT_MIN)?m*n:Max;
}
int main(){

    int n;
    cin >> n;

    vector<vector<int>> nums(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> nums[i][j];
        }
    }
    int ans = largeIsland(nums);
    cout << ans;

    return 0;
}