/*
Q. Birthday Cake Candles

You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

Example

candles = [4, 4, 1, 3]

The maximum height candles are 4 units high. There are 2 of them, so return 2.

Function Description

Complete the function birthdayCakeCandles in the editor below.

birthdayCakeCandles has the following parameter(s):

int candles[n]: the candle heights
Returns
int: the number of candles that are tallest

Input Format

The first line contains a single integer,n, the size of candles[].
The second line contains n space-separated integers, where each integer i describes the height of candles[i].

Constraints
1 <= n <= 10^5
1 <= candles[i] <= 10^7

Sample Input 0

4
3 2 1 3

Sample Output 0

2

Explanation 0

Candle heights are [3, 2, 1, 3]. The tallest candles are 3 units, and there are 2 of them.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int birthdayCakeCandles(vector<int> &candles){

    unordered_map<int, int> mp;
    int maxi = 0;

    for(int i = 0; i < candles.size(); i++){
        mp[candles[i]]++;
    }
    for(int i = 0; i < candles.size(); i++){
        maxi = max(maxi, mp[candles[i]]);
    }
    return maxi;
}
int main(){

    int n;
    cin >> n;

    int temp = 0;
    vector<int> candles;

    for(int i = 0; i < n; i++){
        cin >> temp;
        candles.push_back(temp);
    }
    
    int ans = birthdayCakeCandles(candles);
    cout << endl;
    cout << "Output : " << ans << endl;

    return 0;
}