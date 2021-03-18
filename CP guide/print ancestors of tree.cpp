// print all ancestors of tree
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
	
	for(int i=0;i<path.size()-1;i++)
	{
		cout<<path[i]<<" ";
	}
	
}

void _fin(struct node*root,int val,vector<int>path)
{
	
	if(root==NULL)
	return;
	
	path.push_back(root->data);
	
	if(root->data==val)
	{
		printpath(path);
		return;
	}
	else
	{
		
		
	}
	_fin(root->left,val,path);
	_fin(root->right,val,path);
	
}

int main()
{

struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);	
root->left->left->left=new node(7);	

vector<int>path;

_fin(root,7,path);
}
