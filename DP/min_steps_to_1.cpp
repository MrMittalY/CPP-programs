#include<iostream>
using namespace std;
int min(int a,int b){
	if(a<b)
		return a;
	return b;
}

//Recursion
int minSteps(int n){
	if(n==1)
		return 0;
	int x,y=n,z=n;
	x=minSteps(n-1);
	if(n%2==0)
		y=minSteps(n/2);
	if(n%3==0)
		z=minSteps(n/3);
	return 1+min(x,min(y,z));
}

//Memoization
int minSteps_memo_helper(int* arr,int n){
	if(n==1)
		return 0;
	if(arr[n]!=-1){
		return arr[n];
	}
	int x,y=n,z=n;
	x=minSteps_memo_helper(arr,n-1);
	if(n%2==0)
		y=minSteps_memo_helper(arr,n/2);
	if(n%3==0)
		z=minSteps_memo_helper(arr,n/3);
	arr[n]=1+min(x,min(y,z));
	return arr[n];
}
int minSteps_memo(int n){
	int arr[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	return minSteps_memo_helper(arr,n);
}

//DP
int minSteps_dp(int n){
	int arr[n+1];
	arr[1]=0;
	for(int i=2;i<=n;i++){
		int x=arr[i-1],y=n,z=n;
		if(i%2==0)
			y=arr[i/2];
		if(i%3==0)
			z=arr[i/3];
		arr[i]=1+min(x,min(y,z));
	}
	return arr[n];
}
int main(){
	cout<<"Enter n";
	int n;
	cin>>n;
	cout<<minSteps_dp(n)<<" ";
	// cout<<minSteps_memo(n)<<" ";
	// cout<<minSteps(n)<<endl;
	return 0;
}