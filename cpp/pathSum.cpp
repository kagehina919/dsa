// https://www.interviewbit.com/problems/path-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sums(TreeNode* A, int sum, int B) {
    if(A != NULL) 
    {
        sum += A->val;
        if(A->left == NULL && A->right == NULL) 
        {
            if(sum == B) 
            {
                return 1;
            }
            else return 0;
        }
        else 
        {
            return (sums(A->left, sum, B) || sums(A->right, sum, B));
        }
    }
}
int Solution::hasPathSum(TreeNode* A, int B) {
    return sums(A, 0, B);
}

