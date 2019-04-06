/* char *a[10] means an array of 10 pointers*/

#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

int main()
{	int i;
	char *a[10]={"books","television","radio","computer","sports"};
	cout<<strlen(a[1]);
	char s[20];
	cout<<"\n Enter your favourite leisure activity: ";
	cin>>s;
	for(i=0;i<5;i++)
	{	if(strcmp(s,a[i])==0)
			{cout<<"\nYour favourite leisure acitivty "<<s<<" is here."<<endl;
	exit(0);}
	}
if(i==5)
	cout<<"\nYour favourite leisure acitivty "<<s<<" is not here."<<endl;
return 0;
}
