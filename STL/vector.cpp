#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> digits={};
	int i=digits.size();
        while(digits[--i]==9){
            digits[i]=0;
            if(i==0){
            	digits.emplace(digits.cbegin(),1);
                goto x;}
        }
        digits[i]++;
        x:
        for(int i=0;i<digits.size();i++)
        	cout<<endl<<digits[i]<<" ";
        return 1;
}