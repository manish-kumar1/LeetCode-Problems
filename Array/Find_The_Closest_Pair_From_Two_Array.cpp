/*
Q. Find The Closest Pair From Two Array

Given two sorted arrays arr and brr and a number x, find the pair whose sum is closest to x and the pair has an element from each array. In the case of multiple closest pairs return any one of them.
Note: Can return the two numbers in any manner. The driver code takes care of the printing of the closest difference.

Example 1:

Input : N = 4, M = 4
arr[ ] = {1, 4, 5, 7}
brr[ ] = {10, 20, 30, 40} 
X = 32
Output : 
1, 30
Explanation:
The closest pair whose sum is closest
to 32 is {1, 30} = 31.

Example 2:

Input : N = 4, M = 4
arr[ ] = {1, 4, 5, 7}
brr[ ] = {10, 20, 30, 40}
X = 50 
Output : 
7, 40 
Explanation: 
The closest pair whose sum is closest
to 50 is {7, 40} = 47.
Your Task:
You only need to complete the function printClosest() that takes an array (arr), another array (brr), size of array arr (N), size of array brr (M), and return the array of two integers whose sum is closest to X. The driver code takes care of the printing of the closest difference.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N, M ≤ 105
1 ≤ A[i], B[i] ≤ 109
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n;

    int v = 0;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> v;
        arr.push_back(v);
    }
    int t = 0; cin >> m;
    vector<int> brr;
    for(int i = 0; i < m; i++){
        cin >> t;
        brr.push_back(t);
    }
    int x; cin >> x;

    return 0;
}