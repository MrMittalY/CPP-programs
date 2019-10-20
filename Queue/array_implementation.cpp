#include<iostream>
using namespace std;
const int SIZE=10;

class Queue
{
	int A[SIZE],front,rear;
public:
	Queue()
	{
		front=-1;
		rear=-1;
	}
	void enQueue(int x)
	{
		if(isFull()){
			cout<<"\n Full!";
			return;
		}
		else if(isEmpty()){
			front=0;rear=0;
		}
		else rear=(rear+1)%SIZE;
		A[rear]=x;
	}
	void deQueue()
	{	
		if(isEmpty())
			cout<<"\nEmpty!! ";
		else if(front==rear)
			front=rear=-1;
		else front=(front+1)%SIZE;
	}
	int frontElement()
	{
		if(isEmpty()){
			cout<<"\nEmpty";
			return 0;
		}
		return A[front];
	}
	bool isEmpty()
	{
		if(front==-1&&rear==-1)
			return true;
		return false;
	}
	bool isFull()
	{
		if((rear+1)%SIZE==front)
			return true;
		return false;
	}
	void print()
	{	cout<<"\nQueue from front is: ";
		if(isEmpty()){
			cout<<"Empty";
			return;
		}
		int count=(rear-front+SIZE)%SIZE+1;
		for(int i=0;i<count;i++){
			cout<<A[(front+i)%SIZE]<<" ";
		}
	}
};
int main()
{
	Queue Q;
	char ch;
	do
{	cout<<endl<<"MENU"<<endl;
	cout<<"1. enQueue"<<endl;
	cout<<"2. deQueue"<<endl;
	cout<<"3. Check Empty"<<endl;
	cout<<"4. Show Front"<<endl;
	cout<<"5. Print Queue"<<endl;
	cout<<"6. Quit"<<endl;
	cin>>ch;
	switch(ch)
	{
		case '1': 	cout<<"\nEnter the element to be pushed: ";
					int x; cin>>x; Q.enQueue(x);
					break;
		case '2':	Q.deQueue();
					break;
		case '3':	if(Q.isEmpty()) cout<<"\nEmpty"; 
					else cout<<"\nNot Empty";
					break;
		case '4':	cout<<endl<<Q.frontElement();
					break;
		case '5':	Q.print();
					break;
		default:	return 0; break;

	}ch=6;
} while (ch>0&&ch<7);
	return 0;
}