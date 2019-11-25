#include<vector>

class MinPriorityQueue{
	vector<int> pq;
public:
	
	bool isEmpty(){
		return pq.size()==0;
	}
	int getSize(){
		return pq.size();
	}
	int getMin(){
		return pq[0];
	}

	void print(){
		cout<<endl;
		for(int i=0;i<pq.size();i++){
			cout<<pq[i]<<" ";
		}
		cout<<endl;
	}

	void insert(int data){
		pq.push_back(data);
		int childIndex=pq.size()-1;
		while(childIndex>0){
			int parentIndex=(childIndex-1)/2;
			if(pq[parentIndex]>pq[childIndex]){
				int temp=pq[parentIndex];
				pq[parentIndex]=pq[childIndex];
				pq[childIndex]=temp;
			}
			else{
				return;
			}	
			childIndex=parentIndex;
		}
	}


	int removeMin(){
		
		int ans=pq[0];
		pq[0]=pq[pq.size()-1];
		pq.pop_back();
		
		int parentIndex=0;
		int leftChildIndex=2*parentIndex+1;
		int rightChildIndex=2*parentIndex+2;
		int minIndex=parentIndex;

		while(leftChildIndex<pq.size()){
			if(pq[leftChildIndex]<pq[minIndex])
				minIndex=leftChildIndex;
			if(rightChildIndex<pq.size()&&pq[rightChildIndex]<pq[minIndex]){
				minIndex=rightChildIndex;
			}

			if(minIndex==parentIndex){
				return ans;
			}

			int temp=pq[minIndex];
			pq[minIndex]=pq[parentIndex];
			pq[parentIndex]=temp;

			parentIndex=minIndex;
			leftChildIndex=2*parentIndex+1;
			rightChildIndex=2*parentIndex+2;
		}
		return ans;
	}

	void inPlaceHeapSort(){
		for(int i=0;i<pq.size();i++){
			helper(pq.size()-i);
		}
	}
private:
		void helper(int n){
		int ans=pq[0];
		pq[0]=pq[n-1];
		pq[n-1]=ans;
		n--;
		
		int parentIndex=0;
		int leftChildIndex=2*parentIndex+1;
		int rightChildIndex=2*parentIndex+2;
		int minIndex=parentIndex;

		while(leftChildIndex<n){
			if(pq[leftChildIndex]<pq[minIndex])
				minIndex=leftChildIndex;
			if(rightChildIndex<n&&pq[rightChildIndex]<pq[minIndex]){
				minIndex=rightChildIndex;
			}

			if(minIndex==parentIndex){
				break;
			}

			int temp=pq[minIndex];
			pq[minIndex]=pq[parentIndex];
			pq[parentIndex]=temp;

			parentIndex=minIndex;
			leftChildIndex=2*parentIndex+1;
			rightChildIndex=2*parentIndex+2;
		}
	}
};