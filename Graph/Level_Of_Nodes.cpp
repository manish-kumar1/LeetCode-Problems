/*
Q. Level of Nodes

Given an integer X and an undirected acyclic graph with V nodes, labeled from 0 to V-1, and E edges, find the level of node labeled as X.

Level is the minimum number of edges you must travel from the node 0 to some target.

If there doesn't exists such a node that is labeled as X, return -1.

Example 1:

Input:
            0
          /  \
        /     \
       1       2
      / \       \
    /    \       \
   3      4       5

X = 4

Output:
2
Explanation:

We can clearly see that Node 4 lies at Level 2.
Example 2:

Input:
            0
          / | \
        /   |  \
       1    2   3

X = 1

Output:
1
Explanation:
Node 1 lies at level 1, immediate after Node 0.
Your task:
You dont need to read input or print anything. Your task is to complete the function nodeLevel() which takes two integers V and X denoting the number of vertices and the node, and another adjacency list adj as input parameters and returns the level of Node X. If node X isn't present it returns -1.

Expected Time Complexity: O(V)
Expected Auxiliary Space: O(V)

Constraints:
2 ≤ V ≤ 104
1 ≤ E ≤ 104
0 ≤ adji, j < V
1 ≤ X < V
Graph doesn't contain multiple edges and self loops.
*/

#include <iostream>
#include <vector>
#include<queue>
using namespace std;

int LevelOfNodes(int V, vector<int> adj[], int X)
{
    vector<int> visited(V, false);
    queue<int> que;
    que.push(0);
    int level = 0;
    while (!que.empty())
    {

        int sz = que.size();
        for(int i = 0; i < sz; i++){
            int u = que.front();
            que.pop();
            visited[u] = true;
            if(u == X)
                return level;
            for(int &v : adj[u])
            {
                if(!visited[v]){
                    que.push(v);
                }
            }
        }
        level++;
    }
    return -1;
}
int main()
{

    int V, E, X;
    cin >> V >> E;

    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> X;

    int ans = LevelOfNodes(V, adj, X);
    cout << endl << "output : ";
    cout << ans;

    return 0;
}