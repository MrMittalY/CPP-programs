#include<iostream>
#include<stack>
#include <string.h>
using namespace std;
void reverse(char* C)
{	int n=strlen(C);
	stack<char> S;
	for(int i=0;i<n;i++)
		S.push(C[i]);
	for(int i=0;i<n;i++)
	{	C[i]=S.top();
		S.pop();
	}
}
int main()
{	
	char s[100];
	cout<<"\nEnter a String: ";
	cin.getline(s,100);
	reverse(s);
	cout<<"\nReversed String: "<<s<<endl;
	return 0;
}