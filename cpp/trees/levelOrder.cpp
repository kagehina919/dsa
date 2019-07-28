#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    struct TreeNode *left, *right;
};

void levelOrder(TreeNode* A) {
    if(A==NULL) return;
    queue<TreeNode*> a;
    a.push(A);
    while(!a.empty()) {
        TreeNode* temp = a.top();
        cout << temp->data << " ";
        a.pop();
        if(temp->left) a.push(temp->left);
        if(temp->right) a.push(temp->right);
    }
}