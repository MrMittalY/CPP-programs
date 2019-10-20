#include<iostream>
using namespace std;

class Node {
	int val;
	struct Node* next;
public:
	Node(int x) {
		this->val=x;
		this->next=NULL;
	}
	Node* insert_end(int x) {
	
		struct Node* temp=this;
		struct Node* temp2= new Node(x);
		if(!temp)	return temp2;
		else {	
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=temp2;
		}
		return this;
	}
	Node* insert_beg(int x){
		struct Node* temp=this;
		struct Node* temp2= new Node(x);
		if(!temp)	return temp2;
		else {	
			temp2->next=temp;
		}
		return temp2;
	}
	Node* insert_nth(int x,int n){
		if(n<=0)
			return insert_beg(x);
		struct Node* temp=this;
		struct Node* temp2= new Node(x);
		int i=1;
		if(!temp)	return temp2;
		while(temp!=NULL){	
			if(i==n) {
			temp2->next=temp->next;
			temp->next=temp2;
			return this;
			}
		temp=temp->next;
		i++;
		}
		return this;
	}
	int get_index(int x) {
		int i=0;
		for(struct Node* temp=this;temp!=NULL;temp=temp->next)
		{
			if(temp->val==x)	return i;
			i++;
		}
		return -1;
	}
	void show()	{
		struct Node* temp=this;
		while(temp!=NULL){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

};

int main()
{
	Node* head;
	head=head->insert_end(10);
	head=head->insert_end(156);
	head=head->insert_end(12);
	head=head->insert_end(03);
	head=head->insert_beg(29);
	head=head->insert_nth(19,1);
	head=head->insert_nth(123,2);
	head=head->insert_nth(33,0);
	head=head->insert_nth(93,6);
	head->show();
	int a=head->get_index(93);
	cout<<a;
	// cout<<head->get_index(93)<<" "<<head->get_index(3)<<" "<<head->get_index(65);
}