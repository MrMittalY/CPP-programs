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
	{	if(temp==NULL) return;
		cout<<temp->data<<" ";
		show(temp->next);
		
	}
	void reverse_show(Node* temp)
	{	if(temp==NULL) return;
		reverse_show(temp->next);
		cout<<temp->data<<" ";
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
	cout<<"Reversed: ";
	head->reverse_show(head);
	cout<<endl;
	return 0;
}
