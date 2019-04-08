#include<iostream>
using namespace std;

typedef void *(func)(int,int);

void add(int a, int b)
{cout<<endl<<a<<"+"<<b<<"="<<a+b<<endl;
}

void sub(int a, int b)
{
cout<<endl<<a<<"-"<<b<<"="<<a-b<<endl;
}
int main()
{
func ptr;
ptr=&add;
ptr(1,2);
ptr=&sub;
ptr(3,4);
return 0;
}
