/*Static data member of the class
	initialises to zero on the creation of the first object
	only one copy is made and shared with all the objects
	irrespective of no. of objects
	visible only within the class but life is entire program
	
Necessary line	--	int item::count;
To give initial value--	int item::count=10;
*/
#include<iostream>
using namespace std;

class item
{
static int count;
int no;
public:	
	void getdata(int a)
	{	no=a;
		count++;
	}
	void getcount()
	{	cout<<"\ncount "<<count;
	}
};
int item::count;
int main()
{
item a,b,c;
a.getcount();
b.getcount();
c.getcount();

a.getdata(44);
a.getcount();
b.getdata(97);
b.getcount();
c.getdata(100);
c.getcount();

a.getcount();
b.getcount();
c.getcount();
cout<<endl;
}

