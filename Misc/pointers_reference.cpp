#include<iostream>
using namespace std;
int main(){
	//Pointers is a variable that is reference to some other variable
	int *ptr;
	int var=7;
	int foo=21;
	ptr=&var;cout<<"*ptr= "<<*ptr<<"  ptr= "<<ptr<<endl;
	ptr=&foo;cout<<"*ptr= "<<*ptr<<"  ptr= "<<ptr<<endl;

	//Refernce is like another name to a variable
	int& ref=var;
	cout<<"ref= "<<ref<<endl;//"*ref= "<<*ref<< not working as it had stored the value stored at var only and not the address.
	ref=foo;
	cout<<"ref= "<<ref<<endl;
	return 0;
	/*
	int* => contains address
	int& => contains value
	*/

}