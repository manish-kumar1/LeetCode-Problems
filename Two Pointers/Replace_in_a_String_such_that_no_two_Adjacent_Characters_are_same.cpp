/*
Q. Replace '?' in a String such that no two adjacent characters are same

Given a string S of length N consisting of “?” and lowercase letters, the task is to replace “?” with lowercase letters such that no adjacent characters are the same. If more than one possible combination exists, print any one of them.

Examples:

Input: S = “?a?a”
Output: baba

Explanation:
Replacing all ‘?’s with ‘b’ modifies the string to “baba”.
Since no adjacent characters in “baba” are the same, print the string as the answer.

Input: S = “???”
Output: aba

Explanation:
Replace first ‘?’ with ‘a’.
Replace second ‘?’ with ‘b’.
Replace third ‘?’ with ‘a’. Now, the modified string is “aba”.
Therefore, there are no adjacent characters in “ba” which are same.

*/

#include<iostream>
using namespace std;

string changeString(string S){

    int n = S.size();

    string s = S;

     // If the first character is '?'
    if(s[0] == '?'){
        s[0] = 'a';

        if(s[0] == s[1]){
            s[0]++;
        }
    }
    for(int i = 1; i < n - 1; i++){

        // if current character is '?'
        if(s[i] == '?'){

            // change character
            s[i] = 'a';

            // Check equality with
            // the previous character
            if(s[i] == s[i-1]){
                s[i]++;
            }

            // Check equality with
            // the next character
            if(s[i] == s[i+1]){
                s[i]++;
            }

            // Check equality with
            // the previous character
            if(s[i] == s[i-1]){
                s[i]++;
            }
        }
    }
    // if last character is '?'
    if(s[n-1] == '?'){

        // change character
        s[n-1] = 'a';

        // Check with previous character
        if(s[n-1] == s[n-2]){
            s[n-1]++;
        }
    }
    return s;
}
int main(){

    string S;
    cin >> S;

    string ans = changeString(S);
    cout << "Output : " << ans;

    return 0;
}