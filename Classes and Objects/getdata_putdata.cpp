//C++ program to show class implementation
#include<iostream>
using namespace std;

class item
{
	int no;
	float cost;
public:
	void getdata(int a, float b);
	
	void putdata()
	{	cout<<"Item No.:	"<<no<<endl;
		cout<<"Item cost:	"<<cost<<endl;
		cout<<"\n";
	}
};
void item:: getdata(int a, float b)
{	no=a;	cost=b;
}

int main()
{
item x;
cout<<"\nObject X\n";
x.getdata(158,484.64);
x.putdata();

item y;
cout<<"\nObject Y\n";
y.getdata(98,7825.6);
y.putdata();
return 0;
}



