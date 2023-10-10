/*
Q. Find Smallest Latter Greater Than Target

You are given an array of characters letters that is sorted in non-decreasing order, 
and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. 
If such a character does not exist, return the first character in letters.

Example 1:
Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.

Example 2:
Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.

Example 3:
Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
 

Constraints:
2 <= letters.length <= 104
letters[i] is a lowercase English letter.
letters is sorted in non-decreasing order.
letters contains at least two different characters.
target is a lowercase English letter.
*/

#include<iostream>
#include<vector>
using namespace std;
char smallestLetter(vector<char> &letters, char target){
    int start = 0;
    int end = letters.size()-1;
    int ans = 0;
    while(start <= end){
        int mid = start + (end - start) /2;
        if(letters[mid] == target){
            start = mid+1;
        }
        else if(letters[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
            ans = mid;
        }
    }
    return letters[ans];
}
int main(){
    int n;
    cin >> n;

    char v = '\0';
    vector<char> letters;
    for(int i = 0; i < n; i++){
        cin >> v;
        letters.push_back(v);
    }
    char target;
    cin >> target;
    char ch = smallestLetter(letters, target);
    cout << ch;

    return 0;
}