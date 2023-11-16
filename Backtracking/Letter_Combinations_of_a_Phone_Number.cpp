/*
Q. Letter Combinations of a Phone Number

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]
 
Constraints:

0 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9'].
*/

#include<iostream>
#include<vector> 
using namespace std;
void solve(string digits, int index, string output, vector<string> &ans, vector<string> &maping){
    if(index >= digits.size()){
        ans.push_back(output);
        return;
    }
    int num = digits[index] - '0';
    string val = maping[num];
    for(int i = 0; i < val.size(); i++){
        output.push_back(val[i]);
        solve(digits, index+1, output, ans, maping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits){
    vector<string> ans;
    if(digits.size() == 0){
        return ans;
    }
    int index = 0;
    string output = "";
    vector<string> maping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, index, output, ans, maping);
    return ans;
}
int main(){
    string digits;
    cin >> digits;

    vector<string> ans = letterCombinations(digits);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}