/*
Q. Search in Row Column Sorted Matrix

Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.

Example 1:

Input:
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}}
Output: 0
Explanation:
62 is not present in the matrix, 
so output is 0.

Example 2:

Input:
n = 1, m = 6, x = 55
matrix[][] = {{18, 21, 27, 38, 55, 67}}
Output: 1
Explanation: 55 is present in the matrix.

Your Task:
You don't need to read input or print anything. Complete the function search() that takes n, m, x, and matrix[][] as input parameters and returns a boolean value. True if x is present in the matrix and false if it is not present.

Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N, M <= 1000
1 <= mat[][] <= 105
1 <= X <= 1000
*/

#include<iostream>
#include<vector>
using namespace std;
bool Search(vector<vector<int>> &matrix, int x){
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = n-1;
    
    while(i < m && j >= 0){
        if(matrix[i][j] == x){
            return true;
        }
        else if(matrix[i][j] < x){
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

    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int x; cin >> x;
    bool ans = Search(matrix, x);
    cout << ans;

    return 0;
}