#include<string>
using namespace std;

template<class V>
class MapNode{

	public:
		string key;
		V value;
		MapNode* next;

		MapNode(string key, V value){
			this->key=key;
			this->value=value;
			next=NULL;
		}
		~MapNode(){
			delete next;
		}
};

template<class V>
class ourmap{
	
	MapNode<V>** buckets;
	int count;
	int numBuckets;

	void rehashing(){
		MapNode<V>** temp=buckets;
		int oldBucketCount=numBuckets;
		numBuckets*=2;
		count=0;
		buckets=new MapNode<V>*[numBuckets];
		for(int i=0;i<numBuckets;i++){
			buckets[i]=NULL;
		}
		for(int i=0;i<oldBucketCount;i++){
			MapNode<V>* head=temp[i];
			for(head;head!=NULL;head=head->next){
				insert(head->key,head->value);
			}
		}
		for(int i=0;i<oldBucketCount;i++){
			MapNode<V>* head=temp[i];
			delete head;
		}
		delete[] temp;	
	}

	int getBucketIndex(string key){
		int hashCode=0;
		int currentCoeff=1;
		
		for(int i=key.length()-1;i>=0;i--){
			hashCode+=key[i]*currentCoeff;
			hashCode%=numBuckets;
			currentCoeff*=37;
			currentCoeff%=numBuckets;
		}
		
		return hashCode%numBuckets;
	}
	
public:
	ourmap(){
		count=0;
		numBuckets=20;
		buckets= new MapNode<V>*[numBuckets];
		for(int i=0;i<numBuckets;i++){
			buckets[i]=NULL;
		}
	}
	~ourmap(){
		for(int i=0;i<numBuckets;i++){
			delete buckets[i];
		}
		delete[] buckets;
	}

	double getLoadFactor(){
		double loadFactor=(1.0*count)/numBuckets;
		return loadFactor;
	}

	void insert(string key, V value){
		int i=getBucketIndex(key);
		MapNode<V>* head=buckets[i];
		for(head;head!=NULL;head=head->next){
			if(head->key==key){
				head->value=value;
				return;
			}
		}
		head=buckets[i];
		MapNode<V>* node=new MapNode<V>(key,value);
		node->next=head;
		buckets[i]=node;
		count++;
		double loadFactor=(1.0*count)/numBuckets;
		if(loadFactor>0.7)
			rehashing();
	}

	V remove(string key){
		int i=getBucketIndex(key);
		MapNode<V>* head=buckets[i];
		MapNode<V>* prev=NULL;
		for(head;head!=NULL;prev=head,head=head->next){
			if(head->key==key){
				if(prev==NULL)
					buckets[i]=head->next;
				else
					prev->next==head->next;
			count--;
			V val=head->val;
			head->next=NULL;
			delete head;
			return val;
			}
		}
		return 0;
	}

	V getValue(string key){
		int i=getBucketIndex(key);
		MapNode<V>* head=buckets[i];
		for(head;head!=NULL;head=head->next){
			if(head->key==key){
				return head->value;
			}
		}
		return 0;
	}
	
	int getSize(){
		return count;
	}
};