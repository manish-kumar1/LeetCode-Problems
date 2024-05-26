/*
Q. Maximum Weight Node

Given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e entry/exit points are unidirectional doors like valves).
You are given an array Edge[] of N integers, where Edge[i] contains the cell index that can be reached from cell i in one step. Edge[i] is -1 if the ith cell doesn't have an exit.

Problem : 1 Maximum Weight Node (Easy)
The task is to find the cell with maximum weight (The weight of a cell is the sum of cell indexes of all cells pointing to that cell). If there are multiple cells with the maximum weight return the cell with highest index.
Note: The cells are indexed with an integer value from 0 to N-1. If there is no cell pointing to the ith cell then the weight of the i'th cell is zero.

INPUT FORMAT :

The first line contains the number of cells N.
The second line has a list of N values of the edge[ ] array, where edge[i] conatins the cell number that can be reached from cell 'i' in one step. edge[i] is -1 if the ith doesn't have ans exit.

OUTPUT FORMAT :

First line denotes the node number with maximum weight node.
Sample Input :
23
4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21

Sample Output :
22

*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &edge){
    int n = edge.size();
    vector<int> cnt(n,0);
    for(int i=0; i<n; i++){
        if(edge[i] != -1)
            cnt[edge[i]] += i;
    }
    int ans = -1;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(maxi <= cnt[i]){
            maxi = cnt[i];
            ans = i;
        }
    }
    return ans;
}
int main(){

    int n;
    cin >> n;

    int vt;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> vt;
        nums.push_back(vt);
    }
    int ans = solve(nums);
    cout << ans << endl;

    return 0;
}