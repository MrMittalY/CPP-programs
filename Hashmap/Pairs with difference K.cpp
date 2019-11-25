// Pairs with difference K
// You are given with an array of integers and an integer K. Write a program to find and print all pairs which have difference K.
// Best solution takes O(n) time. And take difference as absolute.
// Input Format :

// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)
// Line 3 : K

// Output format :

// Print pairs in different lines (pair elements separated by space). In a pair, smaller element should be printed first.
// (Order of different pairs is not important)

// Constraints :
// 1 <= n <= 5000
// Sample Input 1 :

// 4 
// 5 1 2 4
// 3

// Sample Output 1 :

// 2 5
// 1 4

// Sample Input 2 :

// 4
// 4 4 4 4 
// 0

// Sample Output 2 :

// 4 4
// 4 4
// 4 4
// 4 4
// 4 4
// 4 4



#include<iostream>
using namespace std;
#include<unordered_map>
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
