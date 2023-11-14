/*
Q. Rotate a 2D array without using extra space

Given a N x N 2D matrix Arr representing an image. Rotate the image by 90 degrees (anti-clockwise). You need to do this in place. Note that if you end up using an additional array, you will only receive partial score.

Example 1:

Input:
N = 3
Arr[][] = {{1,  2,  3}
           {4,  5,  6}
           {7,  8,  9}}
Output:
 3  6  9 
 2  5  8 
 1  4  7 
Explanation: The given matrix is rotated
by 90 degree in anti-clockwise direction.
Example 2:

Input:
N = 4
Arr[][] = {{1,  2,  3,  4}
           {5,  6,  7,  8}
           {9, 10, 11, 12}
           {13, 14, 15, 16}}
Output:
 4  8 12 16 
 3  7 11 15 
 2  6 10 14 
 1  5  9 13
Explanation: The given matrix is rotated
by 90 degree in anti-clockwise direction.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function rotate() which takes the 2D array of integers arr and n as parameters and returns void. You need to change the array itself.

Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 1000
1 ≤ Arr[i][j] ≤ 1000

*/

#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> RotateMatrix(vector<vector<int>> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < n / 2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    return arr;
}
int main(){

    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    vector<vector<int>> ans = RotateMatrix(arr);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}