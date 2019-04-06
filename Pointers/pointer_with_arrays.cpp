#include<iostream>
using namespace std;

int main()
{	int b;
	int arr[b]={1,86,87,42,35,64,84,48,98,75};
	int *a,num;
	a=arr;
	cout<<"\nEnter the element to be searched\n";
	cin>>num;
	int i=0;	
	while(i!=b-1)
	{
		if(*a==num)
		{
		cout<<"\nThe element "<<num<<" is found at position "<<i+1<<" of the array.";
		exit(0);
		}	
	i++;
	a++;
	}
	cout<<"\nThe element "<<num<<" is not found";
	
return 0;
}
