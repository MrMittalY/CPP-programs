#include<iostream>
using namespace std;
void selection_sort(int A[],int n){
	for(int i=0;i<n-1;i++){
		int imin=i;
		for(int j=i;j<n;j++){
			if(A[j]<A[imin])
				imin=j;
		}
		int temp;
		temp=A[i];
		A[i]=A[imin];
		A[imin]=temp;
	}}



int main(){
	int arr[]={2,7,4,1,5,3},n= *(&arr + 1) - arr;
	selection_sort(arr,n);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}