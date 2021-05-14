// leaf to leaf path
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node*left;
	struct node*right;
	node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

int maxleaf(struct node*root,int &res)
{
	
	if(root==NULL)
	return 0;
	
	int left=maxleaf(root->left,res);
	int right=maxleaf(root->right,res);
	
	int temp=max(left,right)+root->data;
	
	int ans=max(temp,left+right+root->data);
	
	res=max(res,ans);
	
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
	
	maxleaf(root,res);
	
	cout<<res;
	
}
