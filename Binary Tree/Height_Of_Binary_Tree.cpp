/*
Q. Height of Binary Tree

Given a binary tree, find its height.

Example 1:

Input:
     1
    /  \
   2    3

Output: 2

Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   
Your Task:
You don't need to read input or print anything. Your task is to complete the function height() which takes root node of the tree as input parameter and returns an integer denoting the height of the tree. If the tree is empty, return 0. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 109
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* buildTree(string str){
    if(str.length() == 0 || str[0] == 'N'){
        return NULL;
    }
    vector<string> ip;
    istringstream iss(str);
    for(string str; iss >> str;){
        ip.push_back(str);
    }

    Node *root = new Node(stoi(ip[0]));

    int i = 1;
    while(!queue.empty() && i < ip.size()){
        Node* currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if(currVal != "N"){
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if(i >= ip.size()){
            break;
        }
        currVal = ip[i];
        if(currVal != "N"){
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}
int main(){

    string treeString;
    getline(cin, treeString);
    Node* root = buildTree(treeString);

    int ans = height(root);

    return 0;
}