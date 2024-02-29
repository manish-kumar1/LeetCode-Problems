/*
Q. Even odd Tree

A binary tree is named Even-Odd if it meets the following conditions:

The root of the binary tree is at level index 0, its children are at level index 1, their children are at level index 2, etc.
For every even-indexed level, all nodes at the level have odd integer values in strictly increasing order (from left to right).
For every odd-indexed level, all nodes at the level have even integer values in strictly decreasing order (from left to right).
Given the root of a binary tree, return true if the binary tree is Even-Odd, otherwise return false.

Example 1:

Input: root = [1,10,4,3,null,7,9,12,8,6,null,null,2]
Output: true

Explanation: The node values on each level are:
Level 0: [1]
Level 1: [10,4]
Level 2: [3,7,9]
Level 3: [12,8,6,2]
Since levels 0 and 2 are all odd and increasing and levels 1 and 3 are all even and decreasing, the tree is Even-Odd.

Example 2:

Input: root = [5,4,2,3,3,7]
Output: false

Explanation: The node values on each level are:
Level 0: [5]
Level 1: [4,2]
Level 2: [3,3,7]
Node values in level 2 must be in strictly increasing order, so the tree is not Even-Odd.

Example 3:

Input: root = [5,9,1,3,5,7]
Output: false
Explanation: Node values in the level 1 should be even integers.
 
Constraints:

The number of nodes in the tree is in the range [1, 105].
1 <= Node.val <= 106
*/

#include<bits/stdc++.h>
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

    queue<Node*> queue;
    queue.push(root);

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
bool EvenOddTree(Node* root){
    queue<Node*> q;
    q.push(root);
    int level = 0;

    while(!q.empty()) {
        int size = q.size();
        int prevData = (level % 2 == 0) ? INT_MIN : INT_MAX;

        for(int i = 0; i < size; i++){
            Node* node = q.front();
            int currData = node->data;
            q.pop();

            if((level % 2 == 0 && (currData % 2 == 0 || currData <= prevData)) 
            || (level % 2 != 0 && (currData % 2 != 0 || currData >= prevData))){
                return false;
            }
            prevData = currData;
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        level++;

    }
    return true;
}
int main(){

    string treeString;
    getline(cin, treeString);
    Node* root = buildTree(treeString);

    bool ans = EvenOddTree(root);
    cout << ans;
    
    return 0;
}