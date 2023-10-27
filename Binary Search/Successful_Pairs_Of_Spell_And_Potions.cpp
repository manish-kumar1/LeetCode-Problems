/*
Q. Successful Pairs Of Spell And Potions

You are given two positive integer arrays spells and potions, of length n and m respectively, where spells[i] represents the strength of the ith spell and potions[j] represents the strength of the jth potion.

You are also given an integer success. A spell and potion pair is considered successful if the product of their strengths is at least success.

Return an integer array pairs of length n where pairs[i] is the number of potions that will form a successful pair with the ith spell.

 
Example 1:

Input: spells = [5,1,3], potions = [1,2,3,4,5], success = 7
Output: [4,0,3]
Explanation:
- 0th spell: 5 * [1,2,3,4,5] = [5,10,15,20,25]. 4 pairs are successful.
- 1st spell: 1 * [1,2,3,4,5] = [1,2,3,4,5]. 0 pairs are successful.
- 2nd spell: 3 * [1,2,3,4,5] = [3,6,9,12,15]. 3 pairs are successful.
Thus, [4,0,3] is returned.

Example 2:

Input: spells = [3,1,2], potions = [8,5,8], success = 16
Output: [2,0,2]
Explanation:
- 0th spell: 3 * [8,5,8] = [24,15,24]. 2 pairs are successful.
- 1st spell: 1 * [8,5,8] = [8,5,8]. 0 pairs are successful. 
- 2nd spell: 2 * [8,5,8] = [16,10,16]. 2 pairs are successful. 
Thus, [2,0,2] is returned.
 

Constraints:

n == spells.length
m == potions.length
1 <= n, m <= 105
1 <= spells[i], potions[i] <= 105
1 <= success <= 1010
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int BinarySearch(int low, int high, vector<int> &potions, int target){
    int index = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(potions[mid] >= target){
            index = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return index;
}
vector<int> SuccessfulPairs(vector<int> &spells, vector<int> &potions, ll success){
    
    sort(potions.begin(), potions.end());
    int maxPotion = potions[potions.size()-1];
    vector<int> ans;

    for(int i = 0; i < spells.size(); i++){
        int spell = spells[i];
        ll minPotion = ceil((1.0 * success) / spell);
        if(minPotion > maxPotion){
            ans.push_back(0);
            continue;
        }
        int index = BinarySearch(0, potions.size()-1, potions, minPotion);
        ans.push_back(potions.size()-index);
    }
    return ans;
}
int main(){
    int n, m;
    cin >> n >> m;

    int v = 0;
    vector<int> spells;
    for(int i = 0; i < n; i++){
        cin >> v;
        spells.push_back(v);
    }
    int t;
    vector<int> potions;
    for(int i = 0; i < m; i++){
        cin >> t;
        potions.push_back(t);
    }
    ll success;
    cin >> success;
    vector<int> ans = SuccessfulPairs(spells, potions, success);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}