//diameter of binary tree
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
		left=NULL;
		right=NULL;
	}
};

int diameter(struct node*root,int&res)
{
	
	if(root==NULL)
	return 0;
	
	int ld=diameter(root->left,res);
	int rd=diameter(root->right,res);
	
	int temp=max(ld,rd)+1;
	int ans=max(temp,ld+rd+1);
	res=max(res,ans);
	
	return temp;
}

int main()
{
	
	struct node*root=new node(1);
	
	root->left=new node(2);
	
	root->right=new node(3);
	
	root->right->left=new node(4);
	
	
	root->right->right=new node(5);
	
	root->right->left->left=new node(7);
	
	root->right->left->left->left=new node(8);
	
	root->right->right->right=new node(6);
	
	root->right->right->right->right=new node(6);
	
	int res=INT_MIN;
	
	int something=diameter(root,res);
	
	cout<<res;
	
}
