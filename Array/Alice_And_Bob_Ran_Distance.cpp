/*
Q. Alice and Bob happy

Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for N days - on the ith day, Alice ran Ai meter and Bob ran Bi meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.

For example, on a given day

if Alice ran 200 meters and Bob ran 500, Alice would be unhappy but Bob would be happy.
if Alice ran 500 meters and Bob ran 240, Alice would be happy and Bob would be unhappy.
if Alice ran 300 meters and Bob ran 500, both Alice and Bob would be happy.

Input Format

The first line of input will contain a single integer T, denoting the number of test case.
Each test case consists of three lines of input.

The first line of each test case contains a single integer N — the number of days.

The second line of each test case contains N space-separated integers A1, A2, A3,...An the distance run by Alice on the N days.

The third line of each test case contains N space-separated integers B1, B2, B3,....,Bn the distance run by Bob on the N days.

Output Format

For each test case, output on a new line the number of days when both Alice and Bob were happy.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 100
1 <= Ai, B1 <= 10^5

Sample 1:

Input

4
3
100 200 300
300 200 100

4
1000 1000 1000 1000
400 500 600 1200

4
800 399 1400 532
2053 2300 3400 23

5
800 850 900 950 1000
600 800 1000 1200 1400

Output 

1
3
0
5

Explanation:

Test case 1: Alice is unhappy on the first day, since she ran 100 meters but Bob ran 300; and 300 is more than twice of 100.
Similarly, Bob is unhappy on the third day.

Both Alice and Bob are happy on the second day, so the answer is 1.

Test case 2:Bob is unhappy on day 1 and happy on every other day, while Alice is happy on every day. So, they're both happy on three days — the second, third, and fourth.

Test case 3: Alice is unhappy on days 1, 2, 3 and Bob is unhappy on day 4.

Test case 4: Alice and Bob are both happy on all five days.

*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &aliceDistance, vector<int> &bobDistance){

    int count = 0;

    for(int i = 0; i < aliceDistance.size(); i++){
        if(aliceDistance[i] > 2*bobDistance[i]){
            // cout << "Alice would be happy";
        }
        else if(bobDistance[i] > 2*aliceDistance[i]){
            // cout << "Bob would be happy";
        }
        else{
            // Both happy
            count++;
        }
    }
    return count;
}
int main(){
    
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        int A = 0;
        int B = 0;
        vector<int> aliceDistance;
        vector<int> bobDistance;
        
        for(int i = 0; i < n; i++){
            cin >> A;
            aliceDistance.push_back(A);
        }
        for(int i = 0; i < n; i++){
            cin >> B;
            bobDistance.push_back(B);
        }
        cout << endl;
        int ans = solve(aliceDistance, bobDistance);
        
        cout <<"Output : " << ans <<endl;
    }
    return 0;
}
