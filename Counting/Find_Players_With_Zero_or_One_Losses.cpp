/*
Q. Find Players with Zero or One Losses

You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:

answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.

Note:

You should only consider the players that have played at least one match.
The testcases will be generated such that no two matches will have the same outcome.
 
Example 1:

Input: matches = [[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]
Output: [[1,2,10],[4,5,7,8]]
Explanation:
Players 1, 2, and 10 have not lost any matches.
Players 4, 5, 7, and 8 each have lost one match.
Players 3, 6, and 9 each have lost two matches.
Thus, answer[0] = [1,2,10] and answer[1] = [4,5,7,8].

Example 2:

Input: matches = [[2,3],[1,3],[5,4],[6,4]]
Output: [[1,2,5,6],[]]
Explanation:
Players 1, 2, 5, and 6 have not lost any matches.
Players 3 and 4 each have lost two matches.
Thus, answer[0] = [1,2,5,6] and answer[1] = [].
 
Constraints:

1 <= matches.length <= 105
matches[i].length == 2
1 <= winneri, loseri <= 105
winneri != loseri
All matches[i] are unique.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>> &matches){
    unordered_map<int, int> mp;
    for(int i = 0; i < matches.size(); i++){
        mp[matches[i][1]]++;   // players lose one match
    }
    vector<int> notLose;
    vector<int> onceLose;

    for(int i = 0; i < matches.size(); i++){
        if(mp.find(matches[i][0]) == mp.end()){
            notLose.push_back(matches[i][0]);
            mp[matches[i][0]] = 2;
        }
        if(mp[matches[i][1]] == 1){
            onceLose.push_back(matches[i][1]);
        }
    }
    sort(begin(notLose), end(notLose));
    sort(begin(onceLose), end(onceLose));
    
    return {notLose, onceLose};
}
int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matches(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matches[i][j];
        }
    }
    vector<vector<int>> ans = findWinners(matches);
    cout << "Ouput :" << endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}