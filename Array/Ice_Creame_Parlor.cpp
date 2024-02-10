/*
Q. Ice Creame Parlor

Two friends like to pool their money and go to the ice cream parlor. They always choose two distinct flavors and they spend all of their money.

Given a list of prices for the flavors of ice cream, select the two that will cost all of the money they have.

Example.  m = 6, cost = [1, 3, 4, 5, 6]

The two flavors that cost 1 and 5 meet the criteria. Using 1-based indexing, they are at indices 1 and 4.

Function Description

Complete the icecreamParlor function in the editor below.

icecreamParlor has the following parameter(s):

int m: the amount of money they have to spend

int cost[n]: the cost of each flavor of ice cream

Returns

int[2]: the indices of the prices of the two flavors they buy, sorted ascending

Input Format

The first line contains an integer,t, the number of trips to the ice cream parlor. The next t sets of lines each describe a visit.

Each trip is described as follows:

The integer m, the amount of money they have pooled.
The integer n, the number of flavors offered at the time.
n space-separated integers denoting the cost of each flavor: cost[cost[1], cost[2], ....cost[n]].

Note: The index within the cost array represents the flavor of the ice cream purchased.

Constraints

1 <= t <= 50
2 <= m <= 10^4
2 <= n <= 10^4
1 <= cost[i] <= 10^4

There will always be a unique solution.
Sample Input

STDIN       Function
-----       --------
2           t = 2
4           k = 4
5           cost[] size n = 5
1 4 5 3 2   cost = [1, 4, 5, 3, 2]
4           k = 4
4           cost[] size n = 4
2 2 4 3     cost=[2, 2,4, 3]
Sample Output

1 4
1 2

Explanation

Sunny and Johnny make the following two trips to the parlor:

The first time, they pool together m = 4 dollars. Of the five flavors available that day, flavors 1 and 4 have a total cost of 1 + 3 = 4.
The second time, they pool together m = 4 dollars. Of the four flavors available that day, flavors 1 and 2 have a total cost of 2 + 2 = 4.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> iceCreameParlor(vector<int> &cost, int m){

    map<int, int> mp;

    for(int i = 0; i < cost.size(); i++){

        int remain = m - cost[i];

        if(mp.find(remain) != mp.end()){
            return {mp[remain]+1, i+1};
        }
        mp[cost[i]] = i;
    }
    return {};
}
int main(){

    int n;
    cin >> n;

    int temp = 0;

    vector<int> cost;

    for(int i = 0; i < n; i++){
        cin >> temp;
        cost.push_back(temp);
    }
    cout << "m = "; 
    int m; cin >> m;

    vector<int> ans = iceCreameParlor(cost, m);
    
    for(int i = 0; i < ans.size(); i++){
        cout << "Output : " << ans[i] << " ";
    }

    return 0;
}