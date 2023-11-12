/*
Q. Find The Original Array of Prefix Xor

You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
Note that ^ denotes the bitwise-xor operation.

It can be proven that the answer is unique.

Example 1:

Input: pref = [5,2,0,3,1]
Output: [5,7,2,3,2]
Explanation: From the array [5,7,2,3,2] we have the following:
- pref[0] = 5.
- pref[1] = 5 ^ 7 = 2.
- pref[2] = 5 ^ 7 ^ 2 = 0.
- pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.
- pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.

Example 2:

Input: pref = [13]
Output: [13]
Explanation: We have pref[0] = arr[0] = 13.
 
Constraints:
1 <= pref.length <= 105
0 <= pref[i] <= 106
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayXor(vector<int> &pref){
    vector<int> ans;
    ans.push_back(pref[0]);
    int temp = 0;
    for(int i = 1; i < pref.size(); i++){
        temp = pref[i] ^ pref[i-1];
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    int v = 0;
    vector<int> pref;
    for(int i = 0; i < n; i++){
        cin >> v;
        pref.push_back(v);
    }
    vector<int> ans = findArrayXor(pref);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}