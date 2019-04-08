#include<iostream>
using namespace std;

class Node
{	int data;
	
public:
	Node* left;
	Node* right;
	Node(int data)
	{	this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
	/* To make a binary tree, I tried to use this function along with the line that i have marked comment in the main function, instead of copying all these lines to the main function so that i need not make Node* left, * right; public . The program compiled and ran succesfully but it printed nothing. Refer to the screenshot shared alongside. Tell me if I can use this function someway insted.
	void push(Node* root)
	{	
		root=new Node(1);
		root->left=new Node(2);
		root->left->left=new Node(3);
		root->left->right=new Node(4);
		root->right=new Node(5);
		root->right->left=new Node(6);
		root->right->right=new Node(7);
	}*/
	void inorder(Node* root)
	{	if(root==NULL)
			return;
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
	void preorder(Node* root)
	{	if(root==NULL)
			return;
		cout<<root->data<<" ";
		inorder(root->left);
		inorder(root->right);
	}
	void postorder(Node* root)
	{	if(root==NULL)
			return;
		inorder(root->left);
		inorder(root->right);
		cout<<root->data<<" ";
	}
};
int main()
{	Node* root;
	//root->push(root);

		root=new Node(1);
		root->left=new Node(2);
		root->left->left=new Node(3);
		root->left->right=new Node(4);
		root->right=new Node(5);
		root->right->left=new Node(6);
		root->right->right=new Node(7);

	cout<<"\nInorder: ";
	root->inorder(root);
	cout<<"\nPreorder: ";
	root->preorder(root);	
	cout<<"\nPostorder: ";
	root->postorder(root);
	cout<<endl;
return 0;
}
