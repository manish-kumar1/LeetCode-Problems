
/*
Q. Smallest Missing Positive Number

You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.

Note: Positive number starts from 1.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}

Output: 6
Explanation: Smallest positive missing number is 6.

Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}

Output: 2
Explanation: Smallest positive missing number is 2.

Your Task:
The task is to complete the function missingNumber() which returns the smallest positive missing number in the array.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 106
-106 <= arr[i] <= 106
*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> &arr){

    sort(arr.begin(), arr.end());
    int ans = 1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == ans){
            ans++;
        }
    }
    return ans;
}
int main(){

    int n;
    cin >> n;

    int temp = 0;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    int ans = missingNumber(arr);
    cout << "Output : " << ans; 

    return 0;
}