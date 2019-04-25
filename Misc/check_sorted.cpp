#include<iostream>
using namespace std;
int main()
{	int n=0;
	bool temp=1;
	cout<<"\nEnter no of elements in array ";
	cin>>n; int a[n];
	cout<<"\nEnter elements\n";
	for(int i=0;i<n;i++)	
		cin>>a[i];	
	for(int i=0;i<n-1;i++)
		if(a[i]>a[i+1])
			{temp=0;
			break;}
	if(temp==0)	cout<<"\nNot Sorted\n";
	else	cout<<"\nSorted\n";

return 0;
}
