#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
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
Node* InsertIntoBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d < root->data){
        root->left = InsertIntoBST(root->left, d);
    }
    else{
        root->right = InsertIntoBST(root->right, d);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = InsertIntoBST(root, data);
        cin >> data;
    }
}
void inorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " " ;
}
int main(){

    Node* root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << endl;
    cout << "Printing BST" << endl;
    levelOrderTraversal(root);

    cout << endl << "Printing inorder" << endl;
    inorder(root);

    cout << endl << "Printing preorder" << endl;
    preorder(root);

    cout << endl << "Printing postorder" << endl;
    postorder(root);
}