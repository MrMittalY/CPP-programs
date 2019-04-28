#include<iostream>
using namespace std;
int F[100];
int fib(int n)
{	if(F[n]!=-1)
		return F[n];
	F[n]=fib(n-1)+fib(n-2);
	return F[n];
}
int main()
{	int n;
	cout<<"\nEnter the no. : ";
	cin>>n;
	for(int i=0;i<=n;i++)
		F[i]=-1;
	F[0]=0;F[1]=1;
	cout<<"No at "<<n<<" position in Fibonacci series is "<<fib(n)<<endl;
}