// max path sum

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


int solve(struct node*root,int &result)
{
	
	if(root==NULL)
	return 0;
	
	int leftpath=solve(root->left,result);
	int rightpath=solve(root->right,result);
	
	int temp=max(max(leftpath+root->data,rightpath+root->data),root->data);
	int ans=max(temp,leftpath+rightpath+root->data);
	result=max(result,ans);
	return temp;
}

int main()
{
	
	
	int result=INT_MIN;
	
	struct node*root=new node(10);
	root->left=new node(2);
	
	root->right=new node(10);
	root->left->left=new node(20);
	root->left->right=new node(1);
	
	root->right->right=new node(-25);
	root->right->right->left=new node(3);
	root->right->right->right=new node(4);
	
	solve(root,result);
	
	cout<<result;
}

