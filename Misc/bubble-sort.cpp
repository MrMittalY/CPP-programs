#include<iostream>
using namespace std;
void bubble_sort(int A[],int n){
	for(int j=0;j<n-1;j++){
		int flag=0;
		for(int i=0;i<n-j-1;i++){
			if(A[i+1]<A[i]){
				flag=1;
				int temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
		if(flag==0)
			break;
	}
}



int main(){
	int arr[]={2,7,4,1,5,3,6,9,10,57},n= *(&arr + 1) - arr;
	bubble_sort(arr,n);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}