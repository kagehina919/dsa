// https://www.interviewbit.com/problems/symmetric-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL) return true;
    else if(A!=NULL && B==NULL || A==NULL && B!=NULL) return false;
    return A->val == B->val && isSameTree(A->right, B->left) && isSameTree(A->left, B->right);
}

int Solution::isSymmetric(TreeNode* A) {
    isSameTree(A->right, A->left);
}
