#include<iostream>
#include<math.h>
using namespace std;
//i<=sqrt(x) because if a no doesnt have a factor till its sqrt, it won't have any factor further either.
bool checkPrime(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
int main()
{	int n;
	cout<<"\nEnter the no: ";
	cin>>n;
	if(checkPrime(n))
		cout<<"\nThe no "<<n<<" is prime";
	else cout<<"\nThe no "<<n<<" is not prime";
	cout<<endl;
	return 0;
}