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
return 0;
}
