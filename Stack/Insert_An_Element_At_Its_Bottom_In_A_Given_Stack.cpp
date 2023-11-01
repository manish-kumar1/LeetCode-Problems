/*
Q. Insert An Element At Its Bottom In A Given Stack

You are given a stack/deque of integers "MY.STACK" and on integer 'x', 
Your Task is to insert 'x' to the bottom of "MY.STACK" and return updated stack/deque.

NOTE:
if MyStack = [7, 1, 4, 5], ..then the first element represents the element 
at the bottom of the stack and the last element represents the element at the top of the stack.

Example:
Let MyStack = [7, 1, 4, 5] and  x = 9. So, MyStack after insertion becomes [9, 7, 1, 4, 5]
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void solve(stack<int> &st, int X){
    // base case
    if(st.empty()){
        st.push(X);
        return;
    }
    int num = st.top();
    st.pop();

    // recursive call
    solve(st, X);

    st.push(num);
}
stack<int> pushAtBottom(stack<int> &MyStack, int x){
    solve(MyStack, x);
    
    return MyStack;
}
int main(){

    int n;
    cin >> n;
    int temp = 0;
    stack<int> MyStack;
    for(int i = 0; i < n; i++){
        cin >> temp;
        MyStack.push(temp);
    }
    int x;
    cin >> x;

    stack<int> ans = pushAtBottom(MyStack, x);
    vector<int> result;
    while(!ans.empty()){
        int a = ans.top();
        result.push_back(a);
        ans.pop();
    }
    reverse(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}