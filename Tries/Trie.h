#include "TrieNode.h"
#include <string>
using namespace std;
class Trie{
	TrieNode* root;

	void insertWord(TrieNode* root,string word){
		if(word.size()==0){
			root->isTerminal=true;
			return;
		}
		TrieNode* child;
		int index=word[0]-'a';
		if(root->children[index]!=NULL){
			child=root->children[index];
		}
		else{
			child=new TrieNode(word[0]);
			root->children[index]=child;	
		}
		insertWord(child,word.substr(1));
	}
	

	bool searchWord(TrieNode* root, string word){
		if(word.size()==0){
			return root->isTerminal;
		}
		TrieNode* child;
		int index=word[0]-'a';
		if(root->children[index]!=NULL){
			child=root->children[index];
		}
		else{
			return false;	
		}
		return searchWord(child,word.substr(1));
	}

	void removeWord(TrieNode* root, string word){
		if(word.size()==0){
			root->isTerminal=false;
			return;
		}
		TrieNode* child;
		int index=word[0]-'a';
		if(root->children[index]!=NULL){
			child=root->children[index];
		}
		else{
			return;
		}
		removeWord(child,word.substr(1));
		if(child->isTerminal==false){
			for(int i=0;i<26;i++){
				if(child->children[i]!=NULL)
					return;
		}
		delete child;
		root->children[index]=NULL;
		}
	}

public:
	Trie(){
		root=new TrieNode('\0');
	}

	void insertWord(string word){
		insertWord(root,word);
	}

	bool searchWord(string word){
		return	searchWord(root,word);
	}

	void removeWord(string word){
		removeWord(root,word);
	}
};