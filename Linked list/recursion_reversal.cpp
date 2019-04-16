#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* next;
public:
	Node(int x)
	{
		data=x;
		next=NULL;
	}
	Node* insert_end(Node* head,int x)
	{	Node* temp=head;
		Node* temp2=new Node(x);
		if(head==NULL)
			head=temp2;
		else{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=temp2;
		}
		return head;
	}	
	void reverse(Node* temp);
	void print(Node* temp)
	{	if(temp==NULL)
		return;
		cout<<temp->data<<" ";
		print(temp->next);
	}
};
Node* head=NULL;
void Node::reverse(Node* temp)		
{	if(temp->next==NULL)
		{	head=temp;
			return;
		}
		reverse(temp->next);
		Node* temp2=temp->next;
		temp->next->next=temp;
		temp->next==NULL;
		
	}
int main()
{
	int n,data;
	cout<<"\nEnter the no. of elements to be entered in the list ";
	cin>>n;
	for(int i=0;i<n;i++)
	{	cout<<"\nEnter data ";cin>>data;
		head=head->insert_end(head,data);
		head->print(head);
	}
	cout<<"\nReversed: ";
	head->reverse(head);
	head->print(head);
	cout<<endl;
	return 0;
}
