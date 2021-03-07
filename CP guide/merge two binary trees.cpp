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


struct node*merge(struct node*t1,struct node*t2)
{
	
	if(t1==NULL)
	return t2;
	else if(t2==NULL)
	return t1;
	
	t1->data=t1->data+t2->data;
	
	t1->left=merge(t1->left,t2->left);
	t1->right=merge(t1->right,t2->right);
	
	return t1;
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
	
	struct node*t1=new node(1);
	t1->left=new node(2);
	t1->right=new node(3);
	
	struct node*t2=new node(3);
	t2->right=new node(4);
	
	inorder(merge(t1,t2)); //2 4 7
	
}
