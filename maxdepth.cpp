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


int maxdepth(struct node*root){
	
	if(root==NULL)
	return 0;
	
	else
	{
		int ldp=maxdepth(root->left);
		int rdp=maxdepth(root->right);
		
		if(ldp>rdp)
		return 1+ldp;
		else
		return 1+rdp;
	}
}

int main()
{
  	
	struct node*root=new node(1);
	root->left=new node(2);
	
	root->left->left=new node(3);
	
	root->left->left->left=new node(4);
	
	cout<<maxdepth(root);
}
