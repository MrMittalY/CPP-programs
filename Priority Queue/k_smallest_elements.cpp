// Code : K smallest Elements
// Send Feedback
// You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. You need to save them in an array and return it.
// Time complexity should be O(nlogk) and space complexity should be not more than O(k).
// Order of elements in the output is not important.
// Input Format :

// Line 1 : Size of array (n)
// Line 2 : Array elements (separated by space)
// Line 3 : Integer k

// Output Format :

// k smallest elements

// Sample Input 1 :

// 13
// 2 12 9 16 10 5 3 20 25 11 1 8 6 
// 4

// Sample Output 1 :

// 5
// 3
// 2
// 1

#include<iostream>
using namespace std;
#include <vector>
#include<queue>

vector<int> kSmallest(int *input, int n, int k) {
	priority_queue<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        q.push(input[i]);
    }
    for(int i=k;i<n;i++){
        if(q.top()>input[i]){
            q.pop();
            q.push(input[i]);
        }
    }
    for(int i=0;i<k;i++){
        ans.push_back(q.top());
        q.pop();
    }
    return ans;
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
	vector<int> output = kSmallest(input, n, k);
	for(int i = 0; i < output.size(); i++){
		cout << output[i] << endl;
	}
}
