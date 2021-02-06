// root to leaf path

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


void printpath(vector<int>path)
{
	
	for(int i=0;i<path.size();i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
}

void printroot_leaf(struct node*root,vector<int>path)
{
	
	if(root==NULL)
	return;
    	
	path.push_back(root->data);
	
	if(root->left==NULL&&root->right==NULL)
	{
		printpath(path);
	}
	
	printroot_leaf(root->left,path);
	printroot_leaf(root->right,path);
	
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	
	root->right=new node(3);
	
	root->left->left=new node(4);
	
	root->left->right=new node(5);
	
	vector<int>path;
	
	printroot_leaf(root,path);
}
