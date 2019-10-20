#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
	cout<<"argc= "<<argc<<endl;
	int sum=0;
	for(int i=1;i<argc;i++){
		sum+=atoi(argv[i]);
	}
	cout<<sum<<endl;
}