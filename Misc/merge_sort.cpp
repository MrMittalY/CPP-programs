#include<iostream>
using namespace std;

void merge(int a1[],int n1,int a2[],int n2,int a[],int n){
	int i=0,j=0,k=0;
	while(i<n1&&j<n2){
		if(a1[i]<a2[j])
			a[k++]=a1[i++];
		else
			a[k++]=a2[j++];
	}
	while(i<n1){
		a[k++]=a1[i++];
	}
	while(j<n2){
		a[k++]=a2[j++];
	}
}
void merge_sort(int arr[],int n){
	if(n<2)
		return;
	int mid=n/2;
	int left[mid],right[n-mid];
	for(int i=0;i<mid;i++){
		left[i]=arr[i];
	}
	for(int i=mid;i<n;i++){
		right[i-mid]=arr[i];
	}
	merge_sort(left,mid);
	merge_sort(right,n-mid);
	merge(left,mid,right,n-mid,arr,n);
}
int main(){
	int A[]={902,234,345,67,23,234,64,64444,324,554};
	int n=*(&A+1)-A;
	merge_sort(A,n);
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}