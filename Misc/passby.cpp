#include<iostream>
using namespace std;
void passByVal(int val);
void passByRef(int& ref);
void passByPtr(int* ptr);
void passByPtrRef(int*& ptrRef);
int y=5;
int*yptr=&y;
int main(){
	int x=5;
	cout<<"x= "<<x<<endl;
	passByVal(x);
	cout<<"x= "<<x<<endl;
	passByRef(x);
	cout<<"x= "<<x<<endl;
	int *xptr=&x;
	cout<<"x= "<<x<<endl;
	cout<<"*xptr= "<<*xptr<<endl;
	passByPtr(xptr);
	cout<<"x= "<<x<<endl;
	cout<<"*xptr= "<<*xptr<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"*yptr= "<<*yptr<<endl;
	passByPtrRef(xptr);
	cout<<"x= "<<x<<endl;
	cout<<"*xptr= "<<*xptr<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"*yptr= "<<*yptr<<endl;
	return 0;
}
void passByVal(int val){
	val=10;
	cout<<"val= "<<val<<endl;
}
void passByRef(int& ref){
	ref=20;
	cout<<"ref= "<<ref<<endl;
}
void passByPtr(int* ptr){
	*ptr=30;
	cout<<"*ptr= "<<*ptr<<endl;
}
void passByPtrRef(int*& ptrRef){
	*ptrRef=40;
	cout<<"*ptrRef= "<<*ptrRef<<endl;
	ptrRef=yptr;	//Making changes to *ptrRef will lead to changes in yptr as well as xptr both.
	*ptrRef=50;
	cout<<"*ptrRef= "<<*ptrRef<<endl;
}