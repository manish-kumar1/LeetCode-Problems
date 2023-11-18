/*
Q. Sum of Leaf Nodes

Given a Binary Tree of size N. The task is to complete the function sumLeaf(), that should return the sum of all the leaf nodes of the given binary tree.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering a and b) with a 'L' (means node b on left of a) or 'R' (means node b on right of a) after a and b.

Output:
For each testcase, there will be a single line containing the sum of all leaf nodes in the tree.

User Task:
The task is to complete the function sumLeaf() which takes root reference as argument and returns the sum of all leaf nodes.

Constraints:
1 <= T <= 100
1 <= N <= 103

Example:
Input:
2
2
1 2 L 1 3 R
5
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L

Output:
5
190

Explanation:
Testcase 1: Leaf nodes in the tree are 2 and 3, and their sum is 5.
 
*/

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this-> data = d;
        this-> left = NULL;
        this-> right = NULL;
    }
};

node* buildTree(node* root){
   
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(node *root, int &sum){
    if(root == NULL){
        return;
    }
    inorder(root->left, sum);
    
    if(root->left == NULL && root->right == NULL){
        sum = sum + root->data;
    }
    inorder(root->right, sum);

}
int sumOfLeafNodes(node *root){
    int sum = 0;
    inorder(root, sum);
    return sum;
}

int main(){

    // creating tree
    node* root = NULL;
    root = buildTree(root);

    levelOrderTraversal(root);

    cout << endl;
    cout << "sum of leaf Nodes is : " ;
    int ans = sumOfLeafNodes(root);
    cout << ans;
    return 0;
}