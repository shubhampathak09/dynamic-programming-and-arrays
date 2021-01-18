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

int res=INT_MIN;

int max_path_sum(struct node*root)
{
	if(root==NULL)
	return 0;
	
	
	int le=max_path_sum(root->left);
	int re=max_path_sum(root->right);
	
	int max_single=max(max(le+root->data,re+root->data),root->data);
	
	int max_top=max(max_single,le+re+root->data);
	
	res=max(res,max_top);
	
	return res;	
}

int main()
{
	
	struct node *root = new node(10); 
    root->left        = new node(2); 
    root->right       = new node(10); 
    root->left->left  = new node(20); 
    root->left->right = new node(1); 
    root->right->right = new node(-25); 
    root->right->right->left   = new node(3); 
    root->right->right->right  = new node(4);
    
    cout<<max_path_sum(root);
}


// fuck it 
