/*
Q. Apples Redistribution into Boxes

You are given an array apple of size n and an array capacity of size m.

There are n packs where the ith pack contains apple[i] apples. There are m boxes as well, and the ith box has a capacity of capacity[i] apples.

Return the minimum number of boxes you need to select to redistribute these n packs of apples into boxes.

Note that, apples from the same pack can be distributed into different boxes.

 
Example 1:

Input: apple = [1,3,2], capacity = [4,3,1,5,2]
Output: 2
Explanation: We will use boxes with capacities 4 and 5.
It is possible to distribute the apples as the total capacity is greater than or equal to the total number of apples.

Example 2: 

Input: apple = [5,5,5], capacity = [2,4,2,7]
Output: 4
Explanation: We will need to use all the boxes.
 
Constraints:

1 <= n == apple.length <= 50
1 <= m == capacity.length <= 50
1 <= apple[i], capacity[i] <= 50
The input is generated such that it's possible to redistribute packs of apples into boxes.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &apple, vector<int> &capacity){
    sort(capacity.begin(), capacity.end());
    int totalApples = accumulate(apple.begin(), apple.end(), 0);
    int ans = 1;
    for(int i = capacity.size()-1; i >= 0; i--){
        totalApples = totalApples - capacity[i];
        if(totalApples > 0){
            ans++;
        }
        else{
            return ans;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin >> n >> m;

    int v = 0;
    vector<int> apple;
    for(int i = 0; i < n; i++){
        cin >> v;
        apple.push_back(v);
    }
    int x = 0;
    vector<int> capacity;
    for(int i = 0; i < m; i++){
        cin >> x;
        capacity.push_back(x);
    }
    int ans = solve(apple, capacity);
    cout << ans;
    return 0;
}