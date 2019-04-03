/* 
C++ program showing the use of nesting member functions within a class
Program takes a binary no. as input, then checks if it is a binary no., calculates ones compliment and then displays it in the output
*/

#include<iostream>
#include<string>
using namespace std;

class binary
{
	string s,s2;
public:
	void read()
	{	cout<<"\nEnter a binary string ";
		cin>>s;
	}
	void check_bin()
	{	for(int i=0;i<s.length();i++)
			if(s.at(i)!='0' && s.at(i)!='1')
				{cout<<"\nNot a binary Number. Program terminates!"<<endl;
				exit(0);
				}
	}
	void ones_comp()
	{	check_bin();
		s2=s;
		for(int i=0;i<s.length();i++)
			if(s.at(i)=='0')
			s.at(i)='1';
			else
			s.at(i)='0';
	}
	void display()
	{	ones_comp();
		cout<<"\nOnes compliment of Entered binary no. "<<s2<<" is "<<s<<endl;
	}
};

int main()
{
	binary b;
	b.read();
	b.display();
	return 0;
}
