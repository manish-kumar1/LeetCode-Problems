/*
Q. First Non Repeating Character

Given a string S consisting of lowercase Latin Letters. Return the first non-repeating character index in S. If there is no non-repeating character, return -1.

Example 1:

Input:
S = hello
Output: 0
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.

Example 2:

Input:
S = zxvczbtxyzvy
Output: 3
Explanation: In the given string, 'c' is
the character which is non-repeating. 

Your Task:
You only need to complete the function nonrepeatingCharacter() that takes string S as a parameter and returns the character. If there is no non-repeating character then return '$' .

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |S|

Constraints:
1 <= N <= 105
*/

#include<iostream>
#include<unordered_map>
using namespace std;
int nonRepeating(string S){

    unordered_map<char, int> mp;
    for(int i = 0; i < S.size(); i++){
        mp[S[i]]++;
    }
    for(int i = 0; i < S.size(); i++){
        if(mp[S[i]] == 1){
            return i;
        }
    }
    return -1;
}
int main(){

    string S;
    cin >> S;

    int ans = nonRepeating(S);
    cout << ans;

    return 0;
}