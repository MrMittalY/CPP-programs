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
	else{	cout<<"\nSorted\n";

	int start=0, end=n-1;
	int x;
	cout<<"\nEnter the no to search for ";
	cin>>x;
	while(start<=end)
	{	int mid=start+((end-start)/2);
		if(a[mid]==x) {cout<<"\n Found\n"; return 0;}
		else if(a[mid]<x) start=mid+1;
		else  end=mid-1;
	}
	cout<<"Not Found\n";
	}
return 0;
}
