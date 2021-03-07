// invert a binary tree
// 90% of google enginers work on code you write but if you csnt invert a binary tree so fuck off!!

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


void invert(struct node*root)
{
	
	if(root==NULL)
	return;
	
	else
	{
	
	invert(root->left);
	invert(root->right);
	
	struct node*temp=root->left;
	root->left=root->right;
	root->right=temp;
	
}
	
}


void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	inorder(root);
	
	cout<<endl;
	
	invert(root);
	
	inorder(root);
}
