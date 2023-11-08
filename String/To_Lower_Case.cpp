/*
Q. To Lower Case

Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

Example 1:

Input: s = "Hello"
Output: "hello"

Example 2:

Input: s = "here"
Output: "here"

Example 3:

Input: s = "LOVELY"
Output: "lovely"

Constraints:
1 <= s.length <= 100
s consists of printable ASCII characters.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string toLowerCase(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
int main(){
    string s;
    cin >> s;

    string ans = toLowerCase(s);
    cout << ans;

    return 0;
}