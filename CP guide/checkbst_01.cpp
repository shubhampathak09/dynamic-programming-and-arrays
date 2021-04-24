
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



bool checkbst(struct node*root)
{
	
	static node*prev=NULL;
	
	if(root!=NULL)
	{
		
		if(!checkbst(root->left))
		return 0;
		
		if(prev!=NULL&&prev->data>=root->data)
		return 0;
		
		prev=root;
		
		return checkbst(root->right);
	}
	return true;
}

int main()
{
	
	struct node*root=new node(3);
	
	root->left=new node(2);
	
	root->right=new node(1);
	
	
	cout<<checkbst(root);
	
	
}
