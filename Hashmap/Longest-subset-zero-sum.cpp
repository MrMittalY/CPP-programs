// Longest subset zero sum
// Send Feedback
// Given an array consisting of positive and negative integers, find the length of the longest continuous subset whose sum is zero.
// NOTE: You have to return the length of longest subset .
// Input Format :

// Line 1 : Contains an integer N i.e. size of array

// Line 2 : Contains N elements of the array, separated by spaces

// Output Format

//  Line 1 : Length of longest continuous subset 

// Sample Input :

// 10 
//  95 -97 -387 -435 -5 -70 897 127 23 284

// Sample Output :

// 5

#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
    unordered_map<int,int> sumIndex;
    int sum=0;
    int length=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        int currLength;
        if(sum==0){
            currLength=i+1;
            if(currLength>length){
                length=currLength;
            }
        }
        else    if(!sumIndex.count(sum)){
            sumIndex[sum]=i;
        }
        else{
            currLength=i-sumIndex[sum];
            if(currLength>length){
                length=currLength;
            }
        }
    }
    return length;
}


int main(){
  int size;
  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  int ans = lengthOfLongestSubsetWithZeroSum(arr,size);
  cout << ans << endl;
  delete arr;
}
