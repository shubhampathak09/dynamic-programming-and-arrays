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


struct lnode{
	int val;
	lnode*next;
	lnode(int val)
	{
		this->val=val;
		next=NULL;
	}
};

struct lnode*head=NULL;
struct lnode*temp;

void convertll(struct node*root,struct lnode*head)
{
	
	if(root==NULL)
	return;
	
	
	
	convertll(root->left,head);
	
	struct lnode*t=new lnode(root->data);
	if(head==NULL)
	{
		head=t;
		temp=head;
		//cout<<head->val;
	//	cout<<1;
	}
	
	 //  cout<<1;
	     else
	     {
		 
	     temp->next=t;
		 temp=temp->next;
	}
	
	convertll(root->right,head);
	//return;
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
	//struct node*root=new node(2);
	root->left=new node(2);
	root->right=new node(3);
	
	//inorder(root);
	
	convertll(root,head);
	//cout<<1;
	
	cout<<head->val;
	 
	
//	cout<<head->val;
} 


// fml
