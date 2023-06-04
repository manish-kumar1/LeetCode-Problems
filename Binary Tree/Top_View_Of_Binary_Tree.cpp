
/*
Q. Top View Of Binary Tree

Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

             1
           /   \
          /     \
         2       3
        / \     / \
       /   \   /   \
      4     5 6     7

Top view will be: 4 2 1 3 7
Note: Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the left ones only(i.e. leftmost). 
For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.

Example 1:

Input:
      1
   /    \
  2      3
Output: 2 1 3
Example 2:

Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100

Output: 40 20 10 30 100

Your Task:
Since this is a function problem. You don't have to take input. Just complete the function topView() that takes root node as parameter and returns a list of nodes visible from the top view from left to right.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 105
1 ≤ Node Data ≤ 105
*/


#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}
class Solution{
    public:

    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        
        vector<int> ans;
        if (!root)
            return ans;

        // Create a queue for level-order traversal
        queue<pair<Node*, int>> q;
        // Map to store the first encountered node at each horizontal distance
        map<int, int> m;
    
        // Enqueue the root with horizontal distance 0
        q.push({root, 0});
    
        while (!q.empty()) {
            Node *node = q.front().first;
            int hd = q.front().second;
            q.pop();
    
            // If the horizontal distance is not in the map, add it
            if (m.find(hd) == m.end()) {
                m[hd] = node->data;
            }
    
            // Enqueue left and right children with updated horizontal distance
            if (node->left) {
                q.push({node->left, hd - 1});
            }
            if (node->right) {
                q.push({node->right, hd + 1});
            }
        }
        // Print the top view
        for (const auto &x : m) {
            ans.push_back(x.second);
        }
        return ans;
    }
};

int main() {

    string s, ch;
    getline(cin, s);
    
    Node* root = buildTree(s);
    Solution ob;
    vector<int> ans = ob.topView(root);
    
    cout << "Output = ";

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}