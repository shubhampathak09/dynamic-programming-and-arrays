// min and max value in bst
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


int min_val(struct node*root)
{
	if(root==NULL)
	return 0;
	
	int mn=root->data;
	
	if(root->left)
	{
		mn=min_val(root->left);
	}
	return mn;
}
 
int mx_val(struct node*root)
{
	
	if(root==NULL)
	return 0;
	
	int mx=root->data;
	
	if(root->right)
	{
		mx=mx_val(root->right);
	}
	return mx;
 } 
 
// efficient way

int mnvalu(struct node*root)
{
	
	if(root==NULL)
	return 0;
	
	struct node*n=root;
	
	while(n->left!=NULL)
	{
		n=n->left;
	}
	return n->data;
}
 
int main()
{
	
	struct node*root=new node(5);
	root->left=new node(2);
	root->left->left=new node(0);
	root->right=new node(6);
	
	cout<<min_val(root);
	cout<<endl;
	cout<<mx_val(root);
	
	
	cout<<endl;
	
	cout<<mnvalu(root);
	// cool
}
