/*
Problem : 2 Largest Sum Cycle (Medium-Hard)

The task is to find the largest sum of a cycle in the maze(Sum of a cycle is the sum of the cell indexes of all cells present in that cycle).
Note:The cells are named with an integer value from 0 to N-1. If there is no cycle in the graph then return -1.

Example 1:

Input:
23
4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21

Output:
45

Example 2:

Input:

N = 4
Edge[] = {2, 0, -1, 2}

Output:
-1

Explanation:
1 -> 0 -> 2 <- 3
There is no cycle in the graph.

*/

#include<bits/stdc++.h>
using namespace std;

long long largestCycleSum(vector<int> &edge){
    int n = edge.size();

    vector<int> cnt(n,0);
    
    for(auto i : edge){
        if(i != -1) cnt[i]++;
    }
    queue<int> q;
    vector<int> vis(n,0);
    for(int i = 0; i<n; i++){
        if(cnt[i]==0){
            vis[i] = 1;
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front(); q.pop();
        if(edge[node] == -1) continue;
        --cnt[edge[node]];
        if(cnt[edge[node]] == 0){
            vis[edge[node]] = 1;
            q.push(edge[node]);
        }
    }
    
    int ans = -1;
    
    for(int i = 0; i<n; i++){
        if(vis[i]) continue;
        int val = 0;
        for(int st = i; vis[st] == 0; st = edge[st]){
            vis[st] = 1;
            val = val + st;
        }
        ans = max(ans,val);
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
    long long ans = largestCycleSum(nums);
    cout << ans;

    return 0;
}