/*
Q. Remove Duplicates

Given a string Str which may contains lowercase and uppercase chracters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.

Example 1:

Input:
Str = geeksforgeeks
Output: geksfor
Explanation: After removing duplicate
characters such as e, k, g, s, we have
string as "geksfor".

Example 2:

Input:
Str = HappyNewYear
Output: HapyNewYr
Explanation: After removing duplicate
characters such as p, e, a, we have
string as "HapyNewYr".

Your Task:
Complete the function removeDuplicates() which takes a string str, as input parameters and returns a string denoting the answer. You don't have to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
String contains uppercase and lowercase english letters.

*/

#include<iostream>
using namespace std;

string removeDuplicates(string str){

    string ans = "";
    for(int i = 0; i < str.size(); i++){
        if(ans.find(str[i]) == string::npos){
            ans.push_back(str[i]);
        }
    }
    return ans;
}
int main(){

    string str;
    cin >> str;

    string ans = removeDuplicates(str);

    cout << ans;

    return 0;
}