// dimaetr of binary tree
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


int diameter(struct node*root,int &res)
{
	if(root==NULL)
	return 0;
	
	
	int l=diameter(root->left,res);
	int r=diameter(root->right,res);
	
	
	int temp=max(l,r)+1;
	int ans=max(temp,l+r+1);
	res=max(ans,res);
	
	return temp;
}


int main()
{
	
	struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    
    int res=INT_MIN;
	
	
	diameter(root,res);
	
	cout<<res;
}
