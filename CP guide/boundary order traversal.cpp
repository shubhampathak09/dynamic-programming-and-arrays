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

bool isleaf(struct node*root)
{
	return (root->left==NULL&&root->right==NULL);
}

void printleftbound(struct node*root)
{
	
	if(root==NULL||isleaf(root))
	return;
	
	cout<<root->data<<" ";
	 
	if(root->left)
	printleftbound(root->left);
	else
	printleftbound(root->right);  
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
 
	
	printleftbound(root);
}
