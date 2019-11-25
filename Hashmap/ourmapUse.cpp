#include<iostream>
#include<string>
#include"ourmap.h"
using namespace std;


int main(){
	ourmap<int> x;

	string key="dnij";
	for(int i=0;i<200;i++){
		key+=(i+'0');
		x.insert(key,i);
		cout<<x.getLoadFactor()<<"\t"<<x.getSize()<<endl;
	}



	// x.insert("sdjc",243);
	// x.insert("sdjasc",233);
	// x.insert("sfdsdjc",235);
	// x.insert("jc",523);
	// x.insert("ssaddjc",231);
	// x.insert("jc",232);
	// x.insert("dmk",235);
	// cout<<x.getBucketIndex("vdwqfvdcsasf")<<endl;
	// cout<<x.getBucketIndex("vsf")<<endl;
	// cout<<x.getBucketIndex("vdfvdwqdasf")<<endl;
	// cout<<x.getBucketIndex("vdfvdasdqwf")<<endl;
	// cout<<x.getBucketIndex("vddsfvdasf")<<endl;
	// cout<<x.getBucketIndex("vdasf")<<endl;
	// cout<<x.getSize()<<endl;
	// cout<<x.getValue("jc")<<endl;
	return 0;
}