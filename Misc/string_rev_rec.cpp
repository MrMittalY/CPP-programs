#include<iostream>
#include<string>
using namespace std;

//RECURSIVE-1
// string rec(string s){
// 	string temp;
// 	if(s.length()==0)
// 		return "";
// 	else if(s.length()==1)
// 		return s;
// 	else
// 		temp=rec(s.substr(1,s.length()-2));
// 	temp.insert(temp.begin(),s[s.length()-1]);
// 	temp.push_back(s[0]);
// 	return temp;
// }

//RECURSIVE-2
// string rec(string s){
// 	string temp;
// 	if(s.length()==0)
// 		return "";
// 	else if(s.length()==1)
// 		return s;
// 	else
// 		temp=rec(s.substr(1,s.length()-2));
// 	s.replace(1,s.length()-2,temp,0,s.length()-1);
// 	swap(s[0],s[s.length()-1]);
// 	return s;
// }
// void swap(char a,char b){
// 	char c=a;a=b;b=c;
// }


//RECURSIVE-3
string rec(string s){
	if(s.length()==1)
		return s;
	string t=rec(s.substr(1));
		t.push_back(s[0]);
	return t;
}


// ITERATIVE 1
// string rec(string s){
// 	string t;
// 	for(int i=s.length()-1;i>=0;i--){
// 		t.push_back(s[i]);
// 	}
// 	return t;
// }


int main(){
	string s="vivek";
	cout<<rec(s)<<endl;
	return 1;
}