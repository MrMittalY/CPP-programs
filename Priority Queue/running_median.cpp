// Running median
// Send Feedback
// You are given a stream of n integers. For every ith integer, add it to the running list of integers and print the resulting median (of the list till now).
// Print the only integer part of median.
// Input Format :

// Line 1 : An integer N denoting the number of integers in the stream
// Line 2 : N integers which are separated by spaces

// Output Format :

// After each new integer is added to the list print the updated median on a new line

// Input Constraints
// 1 <= n <= 10^5
// 1 <= Ai <= 10^5
// Sample Input 1 :

// 6
// 6 2 1 3 7 5

// Sample Output 1 :

// 6
// 4
// 2
// 2
// 3
// 4

// Sample Output explanation :
// S = {6}, median = 6
// S = {6, 2} -> {2, 6}, median = 4
// S = {6, 2, 1} -> {1, 2, 6}, median = 2
// S = {6, 2, 1, 3} -> {1, 2, 3, 6}, median = 2
// S = {6, 2, 1, 3, 7} -> {1, 2, 3, 6, 7}, median = 3
// S = {6, 2, 1, 3, 7, 5} -> {1, 2, 3, 5, 6, 7}, median = 4


#include <iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    findMedian(arr, n);
    
    delete [] arr;
    
}


void findMedian(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    priority_queue<int,vector<int>,greater<int>> minHeap;
    priority_queue<int> maxHeap;
    
    for(int i=0;i<n;i++){
        
        if(!maxHeap.empty()&&arr[i]>maxHeap.top()){
            minHeap.push(arr[i]);
        }
        else{
            maxHeap.push(arr[i]);
        }
        
        if(maxHeap.size()-minHeap.size()==2){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(minHeap.size()-maxHeap.size()==2){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
        if(i%2==0){//odd no of elements
            if(maxHeap.size()>minHeap.size()){
                cout<<maxHeap.top()<<endl;
            }
            else{
                cout<<minHeap.top()<<endl;
            }
        }
        else{
            cout<<(minHeap.top()+maxHeap.top())/2<<endl;
        }
    }

}
