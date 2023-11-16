/*
Q. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

#include<iostream>
#include<set>
using namespace std;
int LengthOfLongestSubstring(string s){
    set<char> st;
    int maxi = 0;
    int i = 0;  // start pointer
    int j = 0;  // end pointer
    
    while(i < s.size()){

        auto temp = st.find(s[i]);

        if(temp == st.end()){
            if(i-j+1 > maxi){
                maxi = i-j+1;
            }
            st.insert(s[i]);
            i++;
        }
        else{
            st.erase(s[j]);
            j++;
        }
    }
    return maxi;
}
int main(){

    string s;
    cin >> s;

    int ans = LengthOfLongestSubstring(s);

    cout << ans;

    return 0;
}