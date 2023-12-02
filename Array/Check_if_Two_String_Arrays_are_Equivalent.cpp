/*
Q. Check if Two String Arrays are Equivalent

Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

Example 1:

Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.

Example 2:

Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false

Example 3:

Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
 
Constraints:

1 <= word1.length, word2.length <= 103
1 <= word1[i].length, word2[i].length <= 103
1 <= sum(word1[i].length), sum(word2[i].length) <= 103
word1[i] and word2[i] consist of lowercase letters.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2){
    return (accumulate(word1.begin(), word1.end(), string(""))) == (accumulate(word2.begin(), word2.end(), string("")));
}
int main(){

    int n, m;
    cin >> n >> m;

    string s1;
    vector<string> word1;
    for(int i = 0; i < n; i++){
        cin >> s1;
        word1.push_back(s1);
    }

    string s2;
    vector<string> word2;
    for(int i = 0; i < m; i++){
        cin >> s2;
        word2.push_back(s2);
    }

    bool ans = arrayStringsAreEqual(word1, word2);

    cout << "Output: " << ans;

    return 0;
}