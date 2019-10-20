#include<iostream>
using namespace std;
void display(int array[],int n){
	//n=sizeof(array)/sizeof(array[0]);
	//not working becuase c++ passes array parameter as an int pointer. sizeof(array)=sizeof(int*)=8,sizeof(array[0])=sizeof(int)=4 =>n=2;
	for(int i=0;i<n;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}
int main(){
	int array[]={10,5,12,123,22,43,56,67,565};
	int n=sizeof(array)/sizeof(array[0]);
	cout<<n<<endl;
	display(array,n);
	return 0;
}