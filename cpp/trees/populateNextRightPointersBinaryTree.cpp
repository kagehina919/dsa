// https://www.interviewbit.com/problems/populate-next-right-pointers-tree/

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    TreeLinkNode* childhead = NULL;
    TreeLinkNode* child = NULL;
    while(A != NULL) {
        while(A != NULL) {
            if(A->left != NULL) {
                if(childhead != NULL) {
                    child->next = A->left;
                } else {
                    childhead = A->left;
                }
                child = A->left;
            }
            
            if(A->right != NULL) {
                if(childhead != NULL) {
                    child->next = A->right;
                } else {
                    childhead = A->right;
                }
                child = A->right;
            }
            
            A = A->next;
        }
        A = childhead;
        child = NULL;
        childhead = NULL;
    }
}

