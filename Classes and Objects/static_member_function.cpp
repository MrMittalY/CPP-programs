/*STATIC MEMBER FUNCTION
	can have access  only to other static members(both) declared in the same class
	calling :	class-name::function-name;
*/
#include<iostream>
using namespace std;

class test
{
int code;
static int count;
public:
	void getcode()
	{	code=++count;
	}
	void showcode()
	{	cout<<"\n code: "<<code;
	}
	static void showcount()
	{	cout<<"\n count: "<<count;
	}
};

int test::count=4;

int main()
{
test t1,t2;
t1.getcode();
t2.getcode();
test::showcount();
test t3;
t3.getcode();
test::showcount();
t1.showcode();
t2.showcode();
t3.showcode();
cout<<endl;
return 0;
}

