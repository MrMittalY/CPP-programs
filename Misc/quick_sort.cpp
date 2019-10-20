#include<iostream>
using namespace std;
void swap(int* a, int* b){
	cout<<"swap";
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int* A,int start,int end){
	cout<<"partition";
	int pivot=A[end];
	int pIndex=start;
	for(int i=start;i<end;i++){
		if(A[i]<=pivot){
			swap(A[i],A[pIndex]);
			pIndex++;
		}
	}
	swap(A[pIndex],A[end]);
	return pIndex;
}
void quick_sort(int* A,int start,int end){
	cout<<"quick";
	if(start<end){
		int pIndex=partition(A,start,end);
		quick_sort(A,start,pIndex-1);
		quick_sort(A,pIndex+1,end);
		}
}
int main(){
	int arr[]={7,2,1,6,8,5,3,4};
	int n=*(&arr+1)-arr;
	cout<<n;
	quick_sort(arr,0,n-1);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}