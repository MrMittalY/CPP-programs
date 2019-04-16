#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(int &v)
{
	for(int i=0;i<v.size();i++)
		cout<<endl<<v[i]<<" ";
	cout<<"\n";
}
int main()
{
	vector<int> v;
	cout<<"\n Size: "<<v.size();
	int x;
	cout<<"\nEnter 5 elements: ";
	for(int i=0;i<5;i++)
	{	cin>>x;
		v.push_back(x);
	}
	cout<<"\n Updated Size: "<<v.size();
	cout<<"\n Contents: ";
	display(v);
	v.push_back(9.852);
	cout<<"\n Updated Size: "<<v.size();
	cout<<"\n Contents: ";
	display(v);
	v.insert(4,1,9);
	cout<<"\n Updated Size: "<<v.size();
	cout<<"\n Contents: ";
	display(v);
	return 0;
}
