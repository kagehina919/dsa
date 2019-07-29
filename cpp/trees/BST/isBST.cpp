int isBSTUtil(TreeNode* node, int min, int max) {
    if (node==NULL)  
        return 1;
    if (node->val < min || node->val > max)  
        return 0;
    return
        isBSTUtil(node->left, min, node->val-1) && isBSTUtil(node->right, node->val+1, max);
}

int Solution::isValidBST(TreeNode* A) {
    return(isBSTUtil(A, INT_MIN, INT_MAX));
}