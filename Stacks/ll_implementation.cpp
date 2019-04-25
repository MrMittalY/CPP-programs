#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* next;
public:
	Node()
	{
		this->data=0;
		this->next=NULL;
	}
	Node(int x)
	{
		this->data=x;
		this->next=NULL;
	}	
	void push(int x);
	void pop();
	bool isEmpty();
	int topElement();
	void print();

};
Node *top;
void Node:: push(int x)
{
	Node* temp=new Node(x);	
	if(top==NULL)
		top=temp;
	else {
		temp->next=top;
		top=temp;
	}
}
void Node::pop()
{	if(isEmpty())
	{
		cout<<"\nStack Underflow!!";
		return;
	}
	Node* temp=top;
	top=temp->next;
	delete temp;	
}
bool Node::isEmpty()
{	if(top==NULL)
		return true;
	return false;
}
int Node::topElement()
{
	Node* temp=top;
	return temp->data;
}
void Node::print()
{	if(isEmpty())
	{	cout<<"\nNot Possible! Stack Empty\n";
		return;
	}	
	Node* temp=top;
	cout<<"\nVertical stack:\n";
	while(temp->next!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{	
	Node S;
	char ch;
	do
	{	cout<<endl<<"MENU"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Check Empty"<<endl;
		cout<<"4. Show Top"<<endl;
		cout<<"5. Print Stack"<<endl;
		cout<<"6. Quit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '1': 	cout<<"\nEnter the element to be pushed: ";
						int x; cin>>x; S.push(x);
						break;
			case '2':	S.pop();
						break;
			case '3':	if(S.isEmpty()) cout<<"\nEmpty"; 
						else cout<<"\nNot Empty";
						break;
			case '4':	cout<<endl<<S.topElement();
						break;
			case '5':	S.print();
						break;
			default:	break;
		}ch=6;
	} while (ch>0&&ch<7);
	return 0;

}	