#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* next;
public:
	Node ()
	{
		data=0;
		next=NULL;
	}
	Node* insert_beg(int x)
	{	Node* temp=new Node();
        Node* temp2=new Node();
		temp->data=x;
		temp->next=this;
		temp2=temp;
		return temp2		;
	}
	void show(Node* temp)
	{	
		while(temp!=NULL)
		{
		cout<<temp->data<<" ";
		temp=temp->next;
		}
	}
	Node* reverse(Node* head)
	{	Node *prev=NULL,*curr=head,*nexa;
		while(curr!=NULL)
		{	nexa=curr->next;
			curr->next=prev;
			prev=curr;
			curr=nexa;
		}
		head=prev;
		return head;
	}

};
int main()
{	int n,data;
	cout<<"\nEnter the no. of elements to be entered in the list ";
	cin>>n;
	Node* head=NULL;
	for(int i=0;i<n;i++)
	{	cout<<"\nEnter data ";cin>>data;
		head=head->insert_beg(data);
		head->show(head);
	}
	cout<<"Reversed List: ";
	head=head->reverse(head);
	head->show(head);
	cout<<endl;
	return 0;
}
