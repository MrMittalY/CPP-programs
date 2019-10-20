#include<iostream>
using namespace std;
#define SIZE 100
class Stack
{
	int a[SIZE], top;
public:
	Stack()
	{
		top=-1;
	}
	bool isEmpty()
	{
		if(top==-1)
			return true;
		return false;
	}
	int topElement()
	{
		return a[top];
	}
	void push(int x)
	{	if(top==SIZE-1) cout<<"Stack Overflow";
		else a[++top]=x;
	}
	void pop()
	{	if(isEmpty()==1)
			cout<<"\nNot Possible! Stack Empty\n";
		else top--;
	}
	void print()
	{	if(isEmpty()==1)
			cout<<"\nNot Possible! Stack Empty\n";
		else
		{
		cout<<"\nVertical stack:\n";
		for(int i=top;i>=0;i--)
			cout<<a[i]<<endl;
		}
	}
};

int main()
{	Stack S;
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
		default:	return 0;break;
	}ch=6;
} while (ch>0&&ch<7);
	return 0;

}