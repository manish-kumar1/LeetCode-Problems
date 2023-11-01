/*
Q. Delete Middle Element From Stack

You are having a stack 'ARR' of size 'N+1', your task it to delete the middle most element so that size of resulting stack in 'N'.

A stack is a linear data structure where both insertion and deletion of elements take place at the top ot stack.
It follows FILO (first in last out) or LIFO (last in first out) approaches. Books piled on top of each other is an example of a stack.
where you can only remove single book at a time, which is at the top of the stack, Likewise you can only add a single book at a time, on the top of the stack only.

Example:

input: ARR[] = [1, 2, 3, 4, 5],  N = 4
output: ARR[] = [1, 2, 4, 5]

The above example contains an odd number of elements, hence middle element is clarly the (N+1) / 2th element, which is removed from the stack the top of the stack only.

input: ARR[] = [5, 6, 7, 8]   N = 3;
output: ARR[] = [5, 7, 8]

The above example contains an even number of element, so out of the two middle elements, we consider the one which occure first, hence the middle element would be 
((N+1) / 2 - 1), element, which is 6 and is removed from the stack in the output.

*/
#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size){

    // base case
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();

    solve(inputStack, count+1, size);

    inputStack.push(temp);
}
stack<int> deleteMiddleElement(stack<int> &inputStack, int N){
    
    int count = 0;
    solve(inputStack, count, N);

    return inputStack;
}
int main(){

    int N;
    cin >> N;

    int v = 0; 
    stack<int> inputStack;
    for(int i = 0; i < N; i++){
        cin >> v;
        inputStack.push(v);
    }
    vector<int> result;
    stack<int> ans = deleteMiddleElement(inputStack, N);

    while(!ans.empty()){
        result.push_back(ans.top());
        ans.pop();
    }
    reverse(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}