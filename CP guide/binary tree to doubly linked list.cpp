// bt to doubly linked list

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
// auto keyword
void bt_dll(struct node*root,auto &head,auto &prev)
{
	
	if(root==NULL)
	return;
	
	bt_dll(root->left,head,prev);
	
	if(prev==NULL)
	{
		head=root;
	}
	else
	{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
	
	bt_dll(root->right,head,prev);
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	
	root->right=new node(3);
	
	struct node*head=NULL;
	struct node*prev=NULL;
	
	bt_dll(root,head,prev);
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->right;
	}
}

// nice intereseting question


