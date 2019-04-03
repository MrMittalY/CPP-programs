//array of objects
#include<iostream>
using namespace std;

const int size=5;

class employee
{
char name[20];
int age;
public:	
	void getdata();
	void putdata();
};
void employee::getdata()
{
	cout<<"\nEnter Name ";
	cin>>name;
	cout<<"\nEnter Age ";
	cin>>age;
	cout<<endl;
}
void employee::putdata()
{
	cout<<"\nName "<<name;
	cout<<"\nAge "<<age;
	cout<<endl;
}
int main()
{
employee e[size];
for(int i=0;i<size;i++)
{	e[i].getdata();
}
cout<<"\n The entered details are \n";
for(int i=0;i<size;i++)
{	e[i].putdata();
}
return 0;
}
