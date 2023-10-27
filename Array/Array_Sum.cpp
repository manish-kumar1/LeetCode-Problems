/*
Q. Array Sum

You are given two numbers represented as integer arrays A and B, where each digit is an element.
You have to return an array which representing the sum of the two given numbers.

The last element denotes the least significant bit, and the first element denotes the most significant bit.

Note : Array A and Array B can be of different size. ( i.e. length of Array A may not be equal to length of Array B ).

Problem Constraints
1 <= |A|, |B| <= 105
0 <= Ai, Bi <= 9

Input Format
The first argument is an integer array A. The second argument is an integer array B.

Output Format
Return an array denoting the sum of the two numbers.

Example Input
Input 1:
A = [1, 2, 3]
B = [2, 5, 5]

Input 2:
A = [9, 9, 1]
B = [1, 2, 1]

Example Output
Output 1:
[3, 7, 8]

Output 2:
[1, 1, 1, 2]

Example Explanation
Explanation 1:
Simply, add all the digits in their place.
Explanation 2:

991 + 121 = 1112
Note that the resultant array size might be larger.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> ArraySum(vector<int> &A, vector<int> &B){
    int i = A.size()-1;
    int j = B.size()-1;
    vector<int> ans;
    int carry = 0;
    while(i >= 0 && j >= 0){
        int sum = A[i] + B[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i >= 0){
        int sum = A[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while(j >= 0){
        int sum = B[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum = 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int n, m;
    cin >> n >> m;

    int v = 0;
    vector<int> A;
    for(int i = 0; i < n; i++){
        cin >> v;
        A.push_back(v);
    }
    int x = 0;
    vector<int> B;
    for(int i = 0; i < m; i++){
        cin >> x;
        B.push_back(x);
    }
    vector<int> ans = ArraySum(A, B);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}