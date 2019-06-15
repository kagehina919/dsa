#include <bits/stdc++.h>

void LevelOrderTraversal(Treenode* A) {
	queue <int> a;
	a.push(A->val);
	while(!a.empty()) {
		cout << a.pop() << endl;
		if(A->left != NULL) {
			a.push(A->left->val);
		}
		if(A->right != NULL) {
			a.push(A->right->val);
		}
	}
}
