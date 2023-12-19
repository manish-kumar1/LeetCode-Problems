/*
Q. Aggressive Cows

You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.

You are also given an integer 'k' which denotes the number of aggressive cows.

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum is the maximum possible.

Print the maximum possible minimum distance.

Example:

Input: n = 3, k = 2 and arr[] = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are palced at positions {1, 3}. Here distance between cows is 2.

Sample Input 1 :
6 4
0 3 4 7 10 9

Sample Output 1 :
3

Explanation to Sample Input 1 :
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.


Sample Input 2 :
5 2
4 2 1 3 6

Sample Output 2 :
5

Expected time complexity:
Can you solve this in O(n * log(n)) time complexity?

Constraints :
2 <= 'n' <= 10 ^ 5
2 <= 'k' <= n
0 <= 'arr[i]' <= 10 ^ 9
Time Limit: 1 sec.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool isPosibleSolution(vector<int> &stalls, int k, int mid){
    int cowsCount = 1;
    int lastPosition = stalls[0];

    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - lastPosition >= mid){
            cowsCount++;
            if(cowsCount == k){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k){
    
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        if(isPosibleSolution(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
int main(){
    int n; 
    cin >> n;

    int t = 0;
    vector<int> stall;
    for(int i = 0; i < n; i++){
        cin >> t;
        stall.push_back(t);
    }
    int k;
    cout << "k = ";
    cin >> k;

    int ans = aggressiveCows(stall, k);
    cout << "Output = " << ans;

    return 0;
}