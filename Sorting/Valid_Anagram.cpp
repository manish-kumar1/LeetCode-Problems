/*
Q. Valid Anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/

#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    unordered_map<char, int> mp;
    for(char ch : s){
        mp[ch] = mp[ch] + 1;
    }

    for(char ch : t){
        if(mp.find(ch) == mp.end() || mp[ch] == 0){
            return false;
        }
        mp[ch] = mp[ch] - 1;
    }
    return true;
}
int main(){

    string s, t;
    cin >> s >> t;

    bool ans = isAnagram(s, t);
    cout << ans;

    return 0;

}