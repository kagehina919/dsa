{

#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        *tree = new Node(val);
        return;
    }
    if(val < (*tree)->data)
    { insert(&(*tree)->left, val);}
    else if(val > (*tree)->data)
    { insert(&(*tree)->right, val);}
}
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node * deleteNode(Node *root,  int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);}
        int r;
        cin>>r;
        root = deleteNode(root,r);
        inorder(root);
        cout<<endl;
    }
}
}
/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST Node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; 
*/
Node * minValueNode(Node* node) { 
    Node* current = node;
    while (current && current->left != NULL) 
        current = current->left; 
    return current; 
}

Node *deleteNode(Node *root,  int x) {
    if(root == NULL) return root;
    
    if(x > root->data) {
        root->right = deleteNode(root->right, x);
    }
    else if(x < root->data) {
        root->left = deleteNode(root->left, x);
    }
    else if(x == root->data) {
        if(root->right == NULL) {
            Node *temp = root->left; 
            free(root); 
            return temp;
        }
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else {
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data); 

        }
    }
}