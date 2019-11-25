#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;


//isConnected
void isConnected_helper(int** edges,int v,int sv,bool* visited){
	visited[sv]=true;
	for(int i=0;i<v;i++){
		if(edges[sv][i]==1&&visited[i]==false){
			isConnected_helper(edges,v,i,visited);
		}
	}
}

void isConnected(int** edges,int v,int sv=0){
	bool* visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	isConnected_helper(edges,v,sv,visited);
	for(int i=0;i<v;i++){
		if(visited[i]==false){
			cout<<"\nNot Connected";
			delete[] visited;
			return;
		}
	}
	cout<<"\nConnected";
	delete[] visited;
}

//Get Path between sv and ev
bool get_path_bfs_print_helper(int** edges,int v,int sv,int ev, bool* visited,unordered_map<int,int>& pathTracker){
	queue<int> q;
	q.push(sv);
	visited[sv]=true;
	while(!q.empty()){
		sv=q.front();
		q.pop();
		for(int i=0;i<v;i++){
			if(edges[sv][i]==1&&visited[i]==false){
				pathTracker[i]=sv;
				q.push(i);
				visited[i]=true;
				if(i==ev){
					return true;
				}
			}
		}
	}
	return false;
}
void get_path_bfs_print(int** edges,int v,int sv,int ev){
	bool* visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	vector<int> path;
	unordered_map<int,int> pathTracker;
	if(get_path_bfs_print_helper(edges,v,sv,ev,visited,pathTracker)){
		unordered_map<int,int>::iterator it=pathTracker.find(ev);
		path.push_back(ev);
		while(it!=pathTracker.end()){
			path.push_back(it->second);
			it=pathTracker.find(it->second);
		}
		cout<<"\nFound BFS Path: ";
		for(int i=path.size()-1;i>=0;i--){
			cout<<path[i];
		}
		cout<<endl;
	}
	else{

		cout<<"\nNot Found BFS Path";
	}	
	delete[] visited;
}


//Get Path between sv(start vertex) and ev(end vertex)
bool get_path_dfs_print_helper(int** edges,int v,int sv,int ev,bool* visited,vector<int>& path){
	if(sv==ev){
		return true;
	}
	visited[sv]=true;
	for(int i=0;i<v;i++){
		if(edges[sv][i]==1&&visited[i]==false){
			if(get_path_dfs_print_helper(edges,v,i,ev,visited,path)==true){
				path.push_back(i);
				return true;
			}
		}
	}
	return false;
}
void get_path_dfs_print(int** edges,int v,int sv,int ev){
	bool* visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	vector<int> path;
	if(get_path_dfs_print_helper(edges,v,sv,ev,visited,path)==true){
		path.push_back(sv);
		cout<<"\nFound DFS Path: ";
		for(int i=path.size()-1;i>=0;i--){
			cout<<path[i];
		}
	}
	else{
		cout<<"\nNot Found DFS Path";
	}
	delete[] visited;
}


//Has Path between sv(start vertex) and ev(end vertex)
bool has_path_dfs_print_helper(int** edges,int v,int sv,int ev,bool* visited){
	if(sv==ev)
		return true;
	visited[sv]=true;
	for(int i=0;i<v;i++){
		if(edges[sv][i]==1&&visited[i]==false){
			if(has_path_dfs_print_helper(edges,v,i,ev,visited)==true)
				return true;
		}
	}
	return false;
}
bool has_path_dfs_print(int** edges,int v,int sv,int ev){
	bool* visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	bool path= has_path_dfs_print_helper(edges,v,sv,ev,visited);
	delete[] visited;
	return path;
}



//DFS
void dfs_print_helper(int** edges,int v,int sv,bool* visited){
	cout<<sv;
	visited[sv]=true;
	for(int i=0;i<v;i++){
		if(edges[sv][i]==1&&visited[i]==false){
			dfs_print_helper(edges,v,i,visited);
		}
	}
}
void dfs_print(int** edges,int v,int sv){
	bool* visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	dfs_print_helper(edges,v,sv,visited);
	for(int i=0;i<v;i++){
		if(visited[i]==false){
			cout<<" ";
			dfs_print_helper(edges,v,i,visited);
		}
	}
	delete[] visited;
}



//BFS
void bfs_print_helper(int** edges,int v,int sv,bool* visited){
	queue<int> q;
	q.push(sv);
	visited[sv]=true;
	while(!q.empty()){
		sv=q.front();
		q.pop();
		cout<<sv;
		for(int i=0;i<v;i++){
			if(edges[sv][i]==1&&visited[i]==false){
				q.push(i);
				visited[i]=true;
			}
		}
	}
}
void bfs_print(int** edges,int v,int sv){
	bool* visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	bfs_print_helper(edges,v,sv,visited);
	for(int i=0;i<v;i++){
		if(visited[i]==false){
			cout<<" ";
			bfs_print_helper(edges,v,i,visited);
		}
	}
	delete[] visited;
}



int main(){
	int v,e;
	cin>>v>>e;
	int** edges=new int*[v];
	
	for(int i=0;i<v;i++){
		edges[i]=new int[v];
		for(int j=0;j<v;j++){
			edges[i][j]=0;
		}
	}

	for(int i=0;i<e;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
	cout<<"\nDFS Print: ";dfs_print(edges,v,0);
	cout<<"\nBFS Print: ";bfs_print(edges,v,0);
	cout<<"\nPath Between? ";
	int sv,ev;
	cin>>sv>>ev;
	// if(has_path_dfs_print(edges,v,sv,ev))
	// 	cout<<"Found";
	// else
	// 	cout<<"Not Found";
	// cout<<endl;
	get_path_dfs_print(edges,v,sv,ev);
	cout<<endl;
	get_path_bfs_print(edges,v,sv,ev);
	cout<<endl;
	isConnected(edges,v);
	for(int i=0;i<v;i++){
		delete[] edges[i];
	}	
	delete[] edges;
	cout<<endl;
	return 0;
}