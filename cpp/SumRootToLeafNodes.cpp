// https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/

void sums(TreeNode* A, long long int num, long long int &ans) {
    if (A==NULL)
        return;
    num = (num*10 + A->val)%1003;  
    if (A->left==NULL && A->right==NULL) {
        ans = (ans+num)%1003;
        return;
    }
    sums(A->left, num, ans);
    sums(A->right, num, ans);
    return;
}
 
int Solution::sumNumbers(TreeNode* A) {
    long long int num=0;
    long long int ans=0;
    sums(A, num, ans);
    return ans%1003;
    
}
