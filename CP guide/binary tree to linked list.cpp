// back to binary tree to linked list

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

struct lnode
{
	int val;
	struct lnode *next;
	
	lnode(int val)
	{
		this->val=val;
		next=NULL;
	}
};

struct lnode*head=NULL;
struct lnode*temp;

void treetoll(struct node*root)
{
	
	if(root==NULL)
	return;
	
	treetoll(root->left);
	
	struct lnode*t=new lnode(root->data);
	if(head==NULL)
	{
		head=t;
		temp=head;
	}
	else
	{
	 
	 temp->next=t;
	 temp=t;
  	
	}
	
	treetoll(root->right);
}

int main()
{
	
	struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    
    treetoll(root);
    
    while(head!=NULL)
    {
    	cout<<head->val<<" ";
    	head=head->next;
	}
	
}



// fck you sangeet~!!!!!!!!!!!!!!!!!! and da people vrdn and actya
