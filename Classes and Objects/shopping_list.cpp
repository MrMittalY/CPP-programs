#include<iostream>
using namespace std;
const int m=50;

class items
{
	int itemCode[m];
	float itemPrice[m];
	int count;
public:
	items(){count=0;}	
	void getItems();
	void displaySum();
	void displayItems();
	void remove();
};

void items::getItems()
{	
	cout<<"\nEnter item code: ";
	cin>>itemCode[count];
	cout<<"\nEnter item price: ";
	cin>>itemPrice[count];
	cout<<endl;
	count++;
}

void items::displayItems()
{	for(int i=0;i<count;i++)
	{	cout<<"\nItem Code "<<itemCode[i];
		cout<<"\nItem Price "<<itemPrice[i]<<endl;
}
}

void items::displaySum()
{	float sum=0;
	for(int i=0;i<count;i++)
		sum=sum+itemPrice[i];
	cout<<"\n Total price of all the items is "<<sum;
	cout<<endl;
}

void items::remove()
{	int a;
	cout<<"\nEnter the Item code of the item to be removed ";
	cin>>a;
	for(int i=0;i<count;i++)
		if(itemCode[i]==a)
			itemPrice[i]=0;
	cout<<endl;
}

int main()
{
int a;
items x;
do
{
	cout<<"\nEnter your choice:";
	cout<<"\n1. Add an item ";
	cout<<"\n2. Display all items";
	cout<<"\n3. Display Sum of all items";
	cout<<"\n4. Remove an Item";
	cout<<"\n5. Quit"<<endl;
	cin>>a;
	switch(a)
	{	case 1:	x.getItems(); break;
		case 2:	x.displayItems(); break;
		case 3:	x.displaySum(); break;
		case 4:	x.remove(); break;
		case 5:	break;
		default:	cout<<"\nWrong choice. Try again!!"; break;
	}
}while(a!=5);

return 0;
}
