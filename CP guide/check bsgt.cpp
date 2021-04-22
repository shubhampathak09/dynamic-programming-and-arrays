// check if bst

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

int minval(struct node*root)
{
	
	struct node*curr=root;
	while(curr->left!=NULL)
	{
		curr=curr->left;
	}
	return curr->data;
}

int maxval(struct node*root)
{
	struct node*curr=root;
	while(curr->right!=NULL)
	{
		curr=curr->right;
	}
	return curr->data;
}

bool checkbst(struct node*root)
{
	
	if(root==NULL)
	return 0;
	
	if(root->left!=NULL&&root->left->data>minval(root->left))
	return 0;
	
	if(root->right!=NULL&&root->right->data<maxval(root->right))
	return 0;
	
	if(!checkbst(root->left)||!checkbst(root->right))
	return 0;
	
	return 1;
}
int main()
{
	
struct node*root=new node(4);
root->left=new node(2);
root->right=new node(5);
 

cout<<checkbst(root);


//cout<<minval(root);

//cout<<maxval(root);	
}
