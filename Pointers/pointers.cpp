#include<iostream>
using namespace std;

int main()
{
	int a,*ptr1,**ptr2;
	ptr1=&a;
	ptr2=&ptr1;
	cout<<"\nAddress of a "<<ptr1;
	cout<<"\nAddress of ptr1 "<<ptr2;
	cout<<"\nAddress of ptr2 "<<&ptr2;
	cout<<"\nIncrementing the address";
	ptr1+=1;ptr2+=1;		
	cout<<"\nAddress of a "<<ptr1;
	cout<<"\nAddress of ptr1 "<<ptr2;
	cout<<"\nAddress of ptr2 "<<&ptr2;
	
	int b=10,*ptr;
	ptr=&b;
	cout<<"\n\nManipulation of pointers";
	cout<<"\nValue of b "<<b<<"\t"<<*ptr;
	*ptr=*ptr+b;
	cout<<"\nRevised value of b "<<*ptr<<endl;
	
	


return 0;
}
