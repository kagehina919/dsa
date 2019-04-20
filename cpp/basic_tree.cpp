#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

void traverse_in(struct Node* treenode) {
	if(treenode->left!=NULL) traverse_in(treenode->left);
	cout << treenode->data;
	// vec.push_back(treenode->data);
	if(treenode->right!=NULL) traverse_in(treenode->right);
}

void traverse_pre(struct Node* treenode) {
	cout << treenode->data;
	if(treenode->left!=NULL) traverse_pre(treenode->left);
	if(treenode->right!=NULL) traverse_pre(treenode->right);
}

void traverse_post(struct Node* treenode) {
	if(treenode->left!=NULL) traverse_post(treenode->left);
	if(treenode->right!=NULL) traverse_post(treenode->right);
	cout << treenode->data;
}

Node* make_tree1(){
	Node *one = new Node;
	Node *two = new Node;
	Node *three = new Node;
	Node *four = new Node;
	Node *five = new Node;
	one->data = 1;
	one->left = two;
	one->right = three;
	two->data = 2;
	two->left = four;
	two->right = five;
	three->data = 3;
	four->data = 4;
	five->data = 5;
	three->left = NULL;
	four->left = NULL;
	five->left = NULL;
	three->right = NULL;
	four->right = NULL;
	five->right = NULL;
	return one;
}

Node* make_tree2(){
	Node *one = new Node;
	Node *two = new Node;
	Node *three = new Node;
	Node *four = new Node;
	Node *five = new Node;
	one->data = 1;
	one->left = two;
	one->right = three;
	two->data = 2;
	two->left = four;
	two->right = five;
	three->data = 3;
	four->data = 4;
	five->data = 9;
	three->left = NULL;
	four->left = NULL;
	five->left = NULL;
	three->right = NULL;
	four->right = NULL;
	five->right = NULL;
	return one;
}

bool check_identical(Node* t1, Node* t2){
	if(t1 == NULL && t2 == NULL) {
		return true;
	}
	else if(t1 != NULL && t2 == NULL || t1 == NULL && t2 != NULL) {
		return false;
	}
	else if(t1->data == t2->data && check_identical(t1->left, t2->left) && check_identical(t1->right, t2->right)) {
		return true;
	} else {
		return false;
	}
}

int main() {

	Node* t1 = make_tree1();
	Node* t2 = make_tree2();
	
	bool ans = check_identical(t1, t2);
	cout<<ans;

	// traverse_in(one); cout << endl;
	// traverse_pre(one); cout << endl;
	// traverse_post(one); cout << endl;
}