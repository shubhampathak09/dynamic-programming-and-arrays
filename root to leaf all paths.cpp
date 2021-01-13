// 
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

void printp(int path[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
}
void printpathrecurr(struct node*root,int path[],int pathlen)
{
	
	if(root==NULL)
	return;
	
	path[pathlen]=root->data;
	pathlen++;
	if(root->left==NULL&&root->right==NULL)
	{
		printp(path,pathlen);
	}
	else
	{
		printpathrecurr(root->left,path,pathlen);
		printpathrecurr(root->right,path,pathlen);
	}
}

void printpath(struct node*root)
{
	
	int path[100];
	//int pathlen=0;
	printpathrecurr(root,path,0);
}

int main()
{
	
	struct node *root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	
	printpath(root);
}
