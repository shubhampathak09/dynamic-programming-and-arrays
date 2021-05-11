// kth smallest element in bst

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


int findkth(struct node*root,int &k)
{
	if(root==NULL)
	return 0;
	
	int left=findkth(root->left,k);
	if(left)
	{
		return left;
	}
	k=k-1;
	if(k==0)
	{
		return root->data;
	}
	int right=findkth(root->right,k);
	
	return right;
}

int main()
{
	
	struct node*root=new node(20);
	root->left=new node(8);
	root->right=new node(22);
	
	root->left->left=new node(4);
	root->left->right=new node(12);
	
	root->left->right->left=new node(10);
	
	root->left->right->right=new node(14);
	
	int k=3;
	int ans=findkth(root,k);
	
	cout<<ans;
}
