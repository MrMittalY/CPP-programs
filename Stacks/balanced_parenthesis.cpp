#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool isPair(char opening, char closing)
{	if(opening=='('&&closing==')') return true;
	else if(opening=='{'&&closing=='}') return true;
	else if(opening=='['&&closing==']') return true;
	else return false;
}
bool balanced(string e)
{	stack<char> s;
	int i=0;
	if(e[i]==')'||e[i]=='}'||e[i]==']')
		return false;
	for(i=0;i<e.length();i++)
	{
		if(e[i]=='('||e[i]=='{'||e[i]=='[')
			s.push(e[i]);
		else if(e[i]==')'||e[i]=='}'||e[i]==']')
		{
			if(isPair(s.top(),e[i]))
				s.pop();
			else return false;
		}
		else return false;
	}
	return s.empty()?true:false;
	// if(s.empty())
	// 	return true;
	// else false;
}
int main()
{
	string s;
	cout<<"Expression: ";
	cin>>s;
	if(balanced(s))
		cout<<"\nBalanced\n";
	else cout<<"\nNot Balanced\n";
return 0;
}