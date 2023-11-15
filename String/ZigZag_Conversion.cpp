/*
Q. ZigZag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"
 

Constraints:

1 <= s.length <= 1000
s consists of English letters (lower-case and upper-case), ',' and '.'.
1 <= numRows <= 1000
*/

#include<iostream>
#include<vector>
using namespace std;
string ZigZagConversion(string s, int numRows){
    vector<string> ans(numRows);
    if(numRows == 1){
        return s;
    }
    bool flag = false;
    int i = 0;
    for(auto ch : s){
        ans[i] += ch;
        if(i == 0 || i == numRows-1){
            flag = !flag;
        }
        if(flag){
            i = i + 1;
        }
        else{
            i = i - 1;
        }
    }
    string zigzag = "";
    for(auto str : ans){
        zigzag += str;
    }
    return zigzag;
}
int main(){
    
    string s;
    cout << "s :";
    cin >> s;

    int numRows;
    cout << "numRows :";
    cin >> numRows;

    string ans = ZigZagConversion(s, numRows);
    cout << endl;
    cout << ans;

    return 0;
}