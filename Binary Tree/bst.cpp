#include<iostream>
#include<vector>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x)
	{	val=x;left=NULL;right=NULL;
	}
};
class Solution
{
public:
	int kth_smallest(TreeNode* root, int k)
	{	vector<int> list;
		list=helper(root,list);
		if(list.size() < k) 
                	return -1;
             else 
                	return list[k-1];
	}
	vector<int> helper(TreeNode* root,vector<int> list)
	{	{if(root==NULL)
		return list;
		helper(root->left,list);
		list.push_back(root->val);
		helper(root->right,list);
		}
		return list;
	}
};
int main()
{
	Solution* sol=new Solution();
	TreeNode* temp=new TreeNode(3);
	temp->left=new TreeNode(1);
	temp->left->right=new TreeNode(2);
	temp->right=new TreeNode(4);
	
	int a=sol->kth_smallest(temp,2);
	cout<<a;
return 0;	
}


