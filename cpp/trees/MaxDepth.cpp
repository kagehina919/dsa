// https://www.interviewbit.com/problems/max-depth-of-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A == NULL) return 0;
    int lcount = maxDepth(A->left);
    int rcount = maxDepth(A->right);
    return max(lcount, rcount) + 1;
}
