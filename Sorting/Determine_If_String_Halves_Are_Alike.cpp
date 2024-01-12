
/*
Q. Determine if String Halves are Alike

You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.

Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

Example 2:

Input: s = "textbook"
Output: false
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.
 
Constraints:

2 <= s.length <= 1000
s.length is even.
s consists of uppercase and lowercase letters.

*/

#include<iostream>
using namespace std;

bool halvesAreAlike(string s){
    int n = s.size();
    string a = "";
    string b = "";
    int m = n / 2;
    for(int i = 0; i < n /2; i++){
        a.push_back(s[i]);
    }
    for(int i = m; i < s.size(); i++){
        b.push_back(s[i]);
    }
    int cnt1 = 0;
    
    for(int i = 0; i < a.size(); i++){
        if((a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'u' || a[i] == 'i') || (a[i] == 'A' || a[i] == 'E' || a[i] == 'O' || a[i] == 'U' || a[i] == 'I')){
            cnt1++;
        }
    }
    int cnt2 = 0;
    for(int i = 0; i < b.size(); i++){
        if((b[i] == 'a' || b[i] == 'e' || b[i] == 'o' || b[i] == 'u' || b[i] == 'i') || (b[i] == 'A' || b[i] == 'E' || b[i] == 'O' || b[i] == 'U' || b[i] == 'I')){
            cnt2++;
        }
    }
    return cnt1 == cnt2;
}
int main(){
    
    string s;
    cin >> s;

    bool ans = halvesAreAlike(s);

    cout << "Output : " << ans;

    return 0;
}