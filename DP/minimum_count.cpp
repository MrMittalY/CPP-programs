#include<iostream>
#include<math.h>
using namespace std;
int min(int a,int b){
	if(a<b)
		return a;
	return b;
}
int minCount_dp(int n){
	if(n<=3)
		return n;
	int arr[n+1];
	for(int i=0;i<=3;i++){
		arr[i]=i;
	}
	for(int i=4;i<=n;i++){
		int ans=n;
		for(int j=1;j*j<=i;j++){
			if(j*j==i){
				ans=1;
			}
			else{
				ans=min(ans,arr[i-j*j]+1);
			}
		}
		arr[i]=ans;
	}
	return arr[n];
}

int minCount_memo_helper(int n,int* arr){
	if(arr[n]!=-1)
		return arr[n];
	int ans=n;
	for(int i=1;i*i<=n;i++){
		if(i*i==n){
			ans=1;
		}
		else{
			ans=min(ans,minCount_memo_helper(n-i*i,arr)+1);
		}
	}
	arr[n]=ans;
	return arr[n];
}

int minCount_memo(int n){
	int* arr=new int[n+1];
	for(int i=0;i<=3;i++){
		arr[i]=i;
	}
	for(int i=4;i<=n;i++){
		arr[i]=-1;
	}	
	minCount_memo_helper(n,arr);
}

int minCount(int n){
	if(n<=3)
	return n;
	int arr[n+1];
	for(int i=1;i*i<=n;i++){
		if(i*i==n)
			return 1;
		arr[i]=minCount(n-i*i);
	}
	int ans=n;
	for(int i=1;i*i<n;i++){
		ans=min(ans,arr[i]);
	}
	return ans+1;
}

int main(){
	int n;
	cin>>n;
	cout<<endl<<minCount_memo(n)<<endl;
	return 0;
}