#include<iostream>
using namespace std;
#include "pq.h"

int main(){
	MinPriorityQueue q;

	for(int i=1;i<10;i++){
		q.insert(i*2.71);
	}
	q.insert(1);
	q.insert(2);
	q.insert(14);
	q.insert(4);
	q.insert(21);
	q.insert(47);
	q.insert(34);
	q.insert(53);
	q.insert(5);
	q.insert(39);
	q.print();
	
	// cout<<q.removeMin()<<endl;
	// q.print();

	cout<<q.removeMin()<<endl;
	q.print();

	cout<<q.removeMin()<<endl;
	q.print();

	q.inPlaceHeapSort();
	q.print();

	return 0;
}
