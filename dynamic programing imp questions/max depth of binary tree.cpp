// max depth of btre
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

int maxdepth(struct node*root)
{
	
	if(root==NULL)
	return 0;
	else
	{
	
	int ledepth=maxdepth(root->left);
	int ridepth=maxdepth(root->right);
	
	return max(ledepth,ridepth)+1;
}
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	root->left->left=new node(4);
	root->left->right=new node(5);
	
	cout<<maxdepth(root);
	
	
}
