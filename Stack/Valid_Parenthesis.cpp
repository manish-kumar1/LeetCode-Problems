/*
Q. Valid Parenthesis

You're given string str consisting sotely of "(", ")", "{", "}" "[" and "]". Determine whether the parentheses are balanced.

Input Format:

The first line contains an Integer 'T' which denots the number of  test cases or queries to be run, Then the test cases follow.

The first and the only line of input of each test case contains a string. as described in the stack.

Output Format:

For each test case, the first and the only line of output prints whether the string or expression is balanced or not

The Output of every test is printed in a separate line.

Note:

You are not required to print anything explicity. It has already been taken care of. Just implement the given function.

Explanation Of The Sample Input 1:

In TestCase 1 there is always an opening brace a closing brace i.e '{' before '}', '(' before ')', '[' before ']'.

In TestCase 2 there is Closing brace for '[' i.e ']' before closing brace for '(' i.e ')', the balanced sequence should be '[()]'.

Sample Input 2

[(}[
[]{}() 

Sample Output 2

Not Balanced
Balanced
*/

#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string str){
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            st.push(str[i]);
        }
        else{
            if(st.empty() ||
                (str[i] == ')' && st.top() != '(') ||
                (str[i] == ']' && st.top() != '[') ||
                (str[i] == '}' && st.top() != '{')){
                    return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    
    string str;
    cin >> str;

    bool ans = isValidParenthesis(str);
    cout << ans;

    return 0;
}