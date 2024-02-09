/*
Q. CodeChef Streak

CodeChef offers a feature called streak count. A streak is maintained if you solve at least one problem daily.

Om and Addy actively maintain their streaks on CodeChef. Over a span of N consecutive days, you have observed the count of problems solved by each of them.

Your task is to determine the maximum streak achieved by Om and Addy and find who had the longer maximum streak.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.

The first line of each test case contains an integer N — the number of days.
The second line of each test case contains N space-separated integers, the ith of which is Ai, representing the problems solved by Om on the ith day.

The third line of each test case contains N space-separated integers, the ith of which is Bi, representing the problems solved by Addy on the ith day.

Output Format

For each test case, output:

OM, if Om has longer maximum streak than Addy;
ADDY, if Addy has longer maximum streak than Om;
DRAW, if both have equal maximum streak.

You may print each character in uppercase or lowercase. For example, OM, om, Om, and oM, are all considered the same.

Constraints

1 ≤ T ≤ 10 
1 ≤N ≤10 
0 ≤ Ai, Bi ≤ 10^9

The sum of N over all test cases won't exceed 6.10^5

Sample 1:

Input

3
6
1 7 3 0 2 13
0 2 3 4 5 0
3
1 3 4
3 1 2
5
1 2 3 0 1
1 2 0 2 3

Output

Addy
Draw


Explanation:
Test case 1: Om has a maximum streak of 3 days, while Addy has a maximum streak of 4 days.

Test case 2: Both have the same maximum streak of 3 days.

Test case 3: Addy has a maximum streak of 2 days and Om has a maximum streak of 3 days.

*/

#include<bits/stdc++.h>
using namespace std;

string streakDays(vector<int> &omStreakDays, vector<int> &addyStreakDays){

    int omMaxi = 0;
    int omCount = 0;
    for(int i = 0; i < omStreakDays.size(); i++){
        if(omStreakDays[i] != 0){
            omCount++;
            omMaxi = max(omMaxi, omCount);
        }
        else{
            omCount = 0;
        }
    }
    int addyMaxi = 0;
    int addyCount = 0;
    for(int i = 0; i < addyStreakDays.size(); i++){
        if(addyStreakDays[i] != 0){
            addyCount++;
            addyMaxi = max(addyMaxi, addyCount);
        }
        else{
            addyCount = 0;
        }
    }
    if(addyMaxi > omMaxi){
        return "Addy";
    }
    else if(omMaxi > addyMaxi){
        return "Om";
    }
    else{
        return "Draw";
    }
}
int main(){

    int T;
    cin >> T;

    while(T--){

        int n;
        cin >> n;

        int temp = 0;
        vector<int> omStreakDays;
        for(int i = 0; i < n; i++){
            cin >> temp;
            omStreakDays.push_back(temp);
        }
        int t = 0;
        vector<int> addyStreakDays;
        for(int i = 0; i < n; i++){
            cin >> t;
            addyStreakDays.push_back(t);
        }

        string ans = streakDays(omStreakDays, addyStreakDays);
        cout << endl;
        cout <<"Output : " << ans << endl;
    }
    return 0;
}