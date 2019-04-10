#include<iostream>
using namespace std;
class Node
{
	int data;
	Node *left,*right;
public:
	Node(int data)
	{	this->data=data;
		left=right=NULL;
	}
	Node* newNode(int data)
	{	Node* root2=new Node(data);
		return root2;
	}
	Node* insert(Node* root,int x)
	{	if(root==NULL)
		{	root=newNode(x);
			return root;
		}
		if(x<=root->data)
			root->left=insert(root->left,x);
		else root->right=insert(root->right,x);
	}
	bool search(int x)
	{	if(x==this->data) 
			return true;
		else if(x<=this->data)
		this->left->search(x);
		else this->right->search(x);
	}
};
int main()
{
	Node*root=NULL;
	int n,no,x;
	cout<<"\nHow many elements/nodes?\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{	cin>>no;
		root=root->insert(root,no);
	}
	cout<<"\nEnter the no. to be searched ";
	cin>>x;
	bool temp=root->search(x);
	if(temp==true) cout<<"\nFound\n";
	else cout<<"\nNot Found\n";
return 0;
}
	
