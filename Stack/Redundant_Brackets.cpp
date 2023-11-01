/*
Q. Redundant Brackets

Given Valid  mathematical expression in the form of a string. You are supposed to return true if the given expression contains a pair of redundant brackets.
else return false. The given string only contains '(', ')', '+', '-', '*', '/' and lower case English letters.

A pair of brackets is said to be redundant when a subexpression is surrounded by needless/useless brackets.

For Example

((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless.
while (a + (b+c)) does not have any pair of redundant brackets.

Input Format:

The line contains a single integer 'T' denoting the number of test cases. The test case follow
The first line of each test case contains a string denoting the expression.

Output Format:

For each test case, return "Yes" if the expression contains at least one pair of redundant brackets, else return "No".

Note:

You don't need to print anything: It ha already been taken care of just implement the given function.

Constraints:

1 <= T <= 50
3 <= |s| <= 10^4

Time Limits 1 sec

Sample Input 1:

2
(a+b)
(a+c+b)+(c))

Sample Output 1:

No 
Yes

Explaination of Sample input 1:

In the first test case, there are no redundant brackets. Hence, the output is "No".

In the second test case, the brackets around the alphabet 'c'(index 0 and index 10) are redundant. Hence the output is "Yes".
*/

#include<iostream>
#include<stack>
using namespace std;
bool isRedundantBrackets(string str){
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            st.push(str[i]);
        }
        else{
            if(str[i] == ')'){

                bool isRedundant = true;
                while(st.top() != '('){
                    int top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}
int main(){

    string str;
    cin >> str;

    bool ans = isRedundantBrackets(str);
    cout << ans;

    return 0;
}