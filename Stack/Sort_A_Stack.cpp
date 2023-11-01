/*
Q. Sort A Stack

You're given a stack consisting of 'N' Integers. Your task is to sort this stack in descending order using recursion.

We can only use the following functions on this stack.

is_empty(s) : Tests whether stack is empty or not.
push(s) : Adds a new element to the stack.
pop(s) : Removes top element from the stack.
top(s) : Returns value of the top element, Note that this function does not remove elements from the stack.

Note:
1) Use of any loop constructs like while, for etc is not allowed.
2) The stack may contains duplicates integers.
3) The stack may contains any integers i.e it may either be negative, positive or zero.

Example 

Input Mystack[] = [2, 5, 1 6]
Output Mystack[] = [1, 2, 5, 6]

Input Mystack[] = [4, 2, 5, 1]
Output Mystack[] = [1, 2, 4, 5]
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
void printNewStack(stack<int> &MyStack){
    vector<int> ans;
    while(!MyStack.empty()){
        ans.push_back(MyStack.top());
        MyStack.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
void functionStack(stack<int> &MyStack, int temp){
    // base case
    if(MyStack.empty() || (!MyStack.empty() && MyStack.top() < temp)){
        MyStack.push(temp);
        return;
    }

    int num = MyStack.top();
    MyStack.pop();

    functionStack(MyStack, temp);

    MyStack.push(num);
}
void sortStack(stack<int> &MyStack){
    // base case 
    if(MyStack.empty()){
        return;
    }

    int temp = MyStack.top();
    MyStack.pop();

    sortStack(MyStack);

    functionStack(MyStack, temp);
}
int main(){

    int n; 
    cin >> n;

    int st = 0;
    stack<int> MyStack;
    for(int i = 0; i < n; i++){
        cin >> st;
        MyStack.push(st);
    }
    sortStack(MyStack);

    printNewStack(MyStack);

    return 0;
}