#include<iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};


node* root;
node* MakeNode(int n) {
	node* nd = new node();
	nd->data = n;
	nd->left = NULL;
	nd->right = NULL;

	return nd;
}

void Insert(node* r, node* node) {
	if (root == NULL)
		root = node;
	else if (r->data < node->data) {
		if (r->right == NULL)
			r->right = node;
		else
			Insert(r->right, node);
	}
	else {
		if (r->left == NULL)
			r->left = node;
		else
			Insert(r->left, node);
	}
}

void postorder(node* node) {
	if (node->left != NULL)
		postorder(node->left);
	if (node->right != NULL)
		postorder(node->right);
	cout << node->data << '\n';
}

int main()
{
	int value;
	while (cin >> value)
	{
		Insert(root, MakeNode(value));
	}

	postorder(root);
}