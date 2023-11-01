
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

void printUpdateStack(stack<int> &Stack){
    vector<int> ans;
    while(!Stack.empty()){
        ans.push_back(Stack.top());
        Stack.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
void insertAtBottom(stack<int> &Stack, int X){
    // base case
    if(Stack.empty()){
        Stack.push(X);
        return;
    }
    int num = Stack.top();
    Stack.pop();

    // recursive call
    insertAtBottom(Stack, X);

    Stack.push(num);
}
void reverseStack(stack<int> &Stack){
    // base case
    if(Stack.empty()){
        return;
    }
    int temp = Stack.top();
    Stack.pop();

    // recursive call
    reverseStack(Stack);

    insertAtBottom(Stack, temp);
}
int main(){
    int n;
    cin >> n;

    int st;
    stack<int> Stack;
    for(int i = 0; i < n; i++){
        cin >> st;
        Stack.push(st);
    }
    reverseStack(Stack);

    printUpdateStack(Stack);

    return 0;
}