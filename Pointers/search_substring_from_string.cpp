#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char str[50];
cout<<"\nInput main string ";
cin.getline(str,50);
int len1=strlen(str);
char *substr=new char[len1];
cout<<"\nInput substring ";
cin.getline(substr,len1);
int len2=strlen(substr);
int i=0,j=0,k=0;
for(i=0;i<len1;i++)
{	k=i;
	for(j=0;j<len2;j++)
	{
		if(str[k]==substr[j])
		{	if(j==len2-1)
			{cout<<"\nThe substring "<<substr<<" is present in main string "<<str<<".\n";
			exit(0);}
		k++;
		}
	}
}
if(i==len1)
cout<<"\nThe substring "<<substr<<" is not present in main string "<<str<<".\n";

return 0;
}


