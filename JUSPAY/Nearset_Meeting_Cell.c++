/*

I recently appeared for Juspay OA for SDE-1. There were three questions to be solved, I was only able to solve this one. I am posting the question along with the test case and my solution
Round 1: It was an online round hosted of Juspay on Talscale. It consisted of 3 coding question. The coding question goes like this:

Problem Description :- Nearest Meeting Cell
You are given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e. entry/exit points are unidirectional doors like valves). The cells are named with an integer from 0 to N-1.

You are given an array Edge[] of N integers, where Edge[i] contains the cell number that can be reached from of cell i in one step. Edge[i] is -1 if the ith cell doesn’t have an exit.

The task is to find :- Nearest meeting cell : Given any two cells - C1, C2, find the closest cell Cm that can be reached from both C1 and C2.

Note:- The cells are named with an integer value from 0 to N-1. If there is no node pointing to the ith node then weight of the ith node is zero.

INPUT FORMAT :-

The first line contains the number of cells N.
The second line has a list of N values of the edge[ ] array, where edge[i] conatins the cell number that can be reached from cell 'i' in one step. edge[i] is -1 if the ith doesn't have an exit.
Third line for each testcase contains two cell numbers whose nearest meeting cell needs to be found. (return -1 if there is no meeting cell from tw.
OUTPUT FORMAT :
1.Output a single line that denotes the nearest meeting cell (NMC).

Sample Input :
23
4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21
9 2

Sample Output :
4

*/

#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX

vector<long long> Dijkstra(vector<vector<int>>& adj, int s)
{
    priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> pq;
    int v = adj.size();
    vector<long long> ans(v, INF);
    ans[s] = 0;
    pq.push({0, s});
    while (!pq.empty())
    {
        long long dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto i : adj[node])
        {
            if (dist + 1 < ans[i])
            {
                ans[i] = dist + 1;
                pq.push({dist + 1, i});
            }
        }
    }
    return ans;
}
int solve(vector<int> &nums, int cell1, int cell2){

    int n = nums.size();
    vector<vector<int>> graph(n);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != -1){
            graph[i].push_back(nums[i]);
        }
    }

    // Create two arrays A and B for storing min distance from C1 and C2
    vector<long long> A(n, INF), B(n, INF);

    // Part 1 and Part 2 of Algo -> Implement a Dijkstra function and call it for both arrays A and B
    A = Dijkstra(graph, cell1);
    B = Dijkstra(graph, cell2);

    // Now comes Part 3 part of algo-> loop through and get node with min(A[i]+B[i])
    int node = -1;
    long long dist = INF;
    for (int i = 0; i < n; ++i)
    {
        // If node is not accessible from any of them, ignore it
        if (A[i] == INF || B[i] == INF)
            continue;
        if (dist > A[i] + B[i])
        {
            dist = A[i] + B[i];
            node = i;
        }
    }
    return node;
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
    int cell1, cell2;
    cin >> cell1 >> cell2;

    int ans = solve(nums, cell1, cell2);
    cout << ans;

    return 0;
}