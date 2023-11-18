/*
Q. Single Character

Given an array which name is letters, your task to find the find single character in an Array.
return character which is single in array.

example 1
input: letters[] = ['a', 'b', 'd', 'a', 'd']
output: 'b'
*/

#include<iostream>
#include<vector>
using namespace std;
char singleLetters(vector<char> &letters){
    char ans = '\0';
    for(int i = 0; i < letters.size(); i++){
        ans = ans ^ letters[i];
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    char ch;
    vector<char> letters;
    for(int i = 0; i < n; i++){
        cin >> ch;
        letters.push_back(ch);
    }
    char ans = singleLetters(letters);
    cout << ans;

    return 0;

}