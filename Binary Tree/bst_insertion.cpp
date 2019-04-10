//Insertion of a binary tree and then printing the elements by traversing in all the 3 possible traversal orders.
#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* left,*right;
public:
	Node(int data)
	{	this->data=data;
		left=right=NULL;
	}
	Node* newNode(int d)
	{	Node* root=new Node(d);
		return root;
	}	
	Node* Insert(Node* root, int x)
	{	if(root==NULL)
		{
			root=newNode(x);
			return root;
		}
		if(x<=root->data)
			root->left=Insert(root->left,x);
		else if(x>root->data)
			root->right=Insert(root->right,x);

	}
	void preorder(Node* root)
	{	if(root==NULL)
			return;
		cout<<endl<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);	
	}	
	void postorder(Node* root)
	{	if(root==NULL)
			return;
		postorder(root->left);
		postorder(root->right);	
		cout<<endl<<root->data<<" ";
	}
	void inorder(Node* root)
	{	if(root==NULL)
			return;
		inorder(root->left);
		cout<<endl<<root->data<<" ";
		inorder(root->right);	
	}
};
int main()
{
	Node* root=NULL;
	int n,no;
	cout<<"\n How many elements(nodes) you want to enter in the tree\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{	cin>>no;
		root=root->Insert(root,no);
	}
	cout<<"\n Preorder: ";
	root->preorder(root);
	
	cout<<"\n Postorder: ";
	root->postorder(root);

	
	cout<<"\n Inorder: ";
	root->inorder(root);
return 0;
}
