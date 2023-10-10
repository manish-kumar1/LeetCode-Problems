/*
Q. Reverse String

Write a function that reverses a string. 
The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 
Constraints:
1 <= s.length <= 105
s[i] is a printable ascii character.
*/

#include<iostream>
#include<vector>
using namespace std;
vector<char> reverseString(vector<char> &letters){
    int start = 0;
    int end = letters.size()-1;
    while(start < end){
        swap(letters[start], letters[end]);
        start++;
        end--;
    }
    return letters;
}
int main(){
    int n;
    cin >> n;

    char ch = '\0';
    vector<char> letters;
    for(int i = 0; i < n; i++){
        cin >> ch;
        letters.push_back(ch);
    }
    vector<char> str = reverseString(letters);
    for(int i = 0; i < str.size(); i++){
        cout << str[i] << " ";
    }

    return 0;
}