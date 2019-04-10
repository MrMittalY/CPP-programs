//used a function pust to create a tree for inserting the element. THe function itself is prone to errors in case of change in the ordering done of the new Nodes being formed.
/*			1
		       / \
		      2    5
		     / \  / \
		    3  4 6   7
*/
#include<iostream>
using namespace std;
class Node
{	int data;
	Node* left;
	Node* right;
	public:
	Node(int data)
	{	this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
	Node* push(Node* root)
	{	
		root=new Node(1);		
		root->left=new Node(2);		
		root->left->left=new Node(3);
		root->left->right=new Node(4);
		root->right=new Node(5);
		root->right->left=new Node(6);
		root->right->right=new Node(7);
		return root;
	}void inorder(Node* root)
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
		preorder(root->left);
		preorder(root->right);
	}
	void postorder(Node* root)
	{	if(root==NULL)
			return;
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
};
int main()
{	Node* root;
	root=root->push(root);
	cout<<"\nInorder: ";
	root->inorder(root);
	cout<<"\nPreorder: ";
	root->preorder(root);	
	cout<<"\nPostorder: ";
	root->postorder(root);
	cout<<endl;
return 0;
}
