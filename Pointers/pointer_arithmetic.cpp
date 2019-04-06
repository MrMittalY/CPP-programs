#include<iostream>
using namespace std;

int main()
{
	int num[]={89,78,25,64,45,12};
	int *ptr;
	cout<<"\nEntered array is \n";
	for(int i=0;i<6;i++)
		cout<<num[i]<<endl;
	ptr=num;
	cout<<"\nptr and *ptr is";
	cout<<ptr<<endl<<*ptr<<endl;
	cout<<"\nValue of ptr "<<*ptr;
	ptr++;
	cout<<"\nValue of ptr++ "<<*ptr;	
	ptr--;
	cout<<"\nValue of ptr-- "<<*ptr;
	ptr+=2;
	cout<<"\nValue of ptr+2 "<<*ptr;
	ptr-=1;
	cout<<"\nValue of ptr-1 "<<*ptr;
	ptr=ptr+3;
	cout<<"\nValue of ptr+3 "<<*ptr;
	cout<<endl;

return 0;
}
