#include<iostream>
using namespace std;
int fib(int x)
{	if(x<=1)
	return x;
	int a=fib(0),b=fib(1),y;
	for(int i=2;i<=x;i++)
	{
		y=a+b;
		a=b;
		b=y;
	}
	return y;
}
int main()
{	int n;
	cout<<"\nEnter the no. : ";
	cin>>n;
	cout<<"No at "<<n<<" position in Fibonacci series is "<<fib(n)<<endl;
}