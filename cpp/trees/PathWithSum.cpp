// https://www.interviewbit.com/problems/root-to-leaf-paths-with-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void sums(TreeNode* A, int B, vector<vector<int>> &paths, vector<int> v, int sum) {
    if(A != NULL) 
    {
        v.push_back(A->val);
        sum += A->val;
        if(A->left == NULL && A->right == NULL) 
        {
            if(sum == B) 
            {
                paths.push_back(v);
            }
        }
        else 
        {
            sums(A->left, B, paths, v, sum);
            sums(A->right, B, paths, v, sum);
        }
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> paths;
    vector<int> v;
    sums(A, B, paths, v, 0);
    return paths;
}

