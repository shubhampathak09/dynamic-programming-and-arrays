#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	
	}
};


int maxpath(struct node*root,int &res)
{
	
	if(root==NULL)
	return 0;
	
	int left=maxpath(root->left,res);
	int right=maxpath(root->right,res);
	
	int temp=max(max(left,right)+root->data,root->data); // l or r can be negitive and we need to find max path sum from any node to any node in binary tree
	
//	int temp=max(left,right)
//	int ans=max(temp,max(left,right)+root->data)
	int ans=max(temp,left+right+root->data);
	res=max(ans,res);
	return ans;
}   




int main()
{
	
	
	struct node*root=new node(-1);
	root->left=new node(2);
	root->right=new node(6);
	root->left->left=new node(3);
	root->left->right=new node(5);
	
	root->right->left=new node(-1);
	int res=INT_MIN;
	
	maxpath(root,res);
	
	cout<<res;
}
