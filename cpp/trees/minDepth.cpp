// https://www.interviewbit.com/problems/min-depth-of-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A == NULL) {
        return 0;
    }
    int lcount = minDepth(A->left);
    int rcount = minDepth(A->right);
    if (!A->left) 
    return minDepth(A->right) + 1; 
 
    if (!A->right) 
    return minDepth(A->left) + 1;
    return min(lcount, rcount) + 1;
}
