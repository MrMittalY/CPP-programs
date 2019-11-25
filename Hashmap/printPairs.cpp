#include<iostream>
#include<unordered_map>
using namespace std;

void printPairs(int *input, int n, int k) {
    unordered_map<int,int> mymap;
    for(int i=0;i<n;i++){
        mymap[input[i]]++;
    }
    unordered_map<int,int>::iterator it=mymap.begin();
    while(it!=mymap.end()){
        unordered_map<int,int>::iterator it2,it3;
        if(k==0){
            if(it->second>1){
                int count=(it->second-1)*it->second/2;
                for(int i=0;i<count;i++){
                    cout<<it->first<<" "<<it->first<<endl;
                }
            }
            it++;
        }
        else{
            it2=mymap.find(k+it->first);
            if(it2!=mymap.end()){
                for(int i=0;i<(it->second*it2->second);i++)
                    cout<<it->first<<" "<<it2->first<<endl;
            }
            it2=mymap.find(it->first-k);
            if(it2!=mymap.end()){
                for(int i=0;i<(it->second*it2->second);i++)
                    cout<<it2->first<<" "<<it->first<<endl;
            }
            it3=it;
            it++;
            mymap.erase(it3);
        }
    }
    
}



int main() {
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    int k;
    cin >> k;
    printPairs(input, n, k);
}
