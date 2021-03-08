// root to leaf patg

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

void printpath(vector<int>path,int len)
{
	
	for(int i=0;i<len;i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
}

void printrl(struct node*root,vector<int>path,int pathlen)
{
	
	if(root==NULL)
	return;
	
	path[pathlen]=root->data;
	pathlen++;
	
	if(root->left==NULL&&root->right==NULL)
	{
		printpath(path,pathlen);
	}
	else
	{
		printrl(root->left,path,pathlen);
		printrl(root->right,path,pathlen);
	}
}

int main()
{
	
	vector<int>path(100);
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	
	printrl(root,path,0);
}
