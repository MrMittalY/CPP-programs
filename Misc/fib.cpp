#include<iostream>
using namespace std;

int fib1(int n){
	if(n<=1)
		return n;

	return fib1(n-1)+fib1(n-2);
}

int fib2_helper(int* arr, int n){
	if(n<=1){
		return n;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	else{
		int a=fib2_helper(arr,n-1);
		int b=fib2_helper(arr,n-2);
		arr[n]= a+b;
		return arr[n];
	}
}

int fib2(int n){
	int* arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	return fib2_helper(arr,n);
}

int main(){
	int n;
	cout<<"No: ";
	cin>>n;
	cout<<fib2(n)<<endl<<fib1(n)<<endl;
	return 0;
}