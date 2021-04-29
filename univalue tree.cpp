#include<bits/stdc++.h>
using namespace std;




int cnt;


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


bool univalue(struct node*root)
{
	if(root==NULL)
	return true;
	
	bool ls=univalue(root->left);
	bool rs=univalue(root->right);
	
	int left_value=(root->left!=NULL ? root->left->data:root->data);
	int right_value=(root->right!=NULL ? root->right->data:root->data);
	
	if(left_value==root->data&&right_value==root->data&&ls&&rs)
	{
	
	cnt++;
	return true;
	}
	
	return false;
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(1);
	root->right=new node(1);
	
	bool ans=univalue(root);
	
	
	cout<<cnt;
}


// another variation check if it is univalue tree or not
