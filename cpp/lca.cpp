// https://www.interviewbit.com/problems/least-common-ancestor/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::lca(TreeNode* A, int B, int C) {
    if(A == NULL) {
        return NULL;
    }
    if(A->val == B || A->val == C) {
        return A->val;
    }
    Treenode* left = lca(A->left, B, C);
    Treenode* right = lca(A->right, B, C);
    if(left != NULL && right != NULL) {
        return A->val;
    }
    else if(left == NULL && right == NULL) {
        return NULL;
    }
    else if(left != NULL && right == NULL) {
        return left;
    } else {
        return right;
    }
}

