// print all paths with value greater than k 

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

void printpathrecurr(struct node*root,int path[],int flag,int pathlen,int k)
{
	
	if(root==NULL)
	return;
	
	path[pathlen]=root->data;
	pathlen++;
	if(root->data>=k)
	flag=1;
	
	if(root->left==NULL&&root->right==NULL) //leaf node print
	{
		if(flag==1)
		printp(path,pathlen);
	}
	else
	{
		printpathrecurr(root->left,path,flag,pathlen,k);
		printpathrecurr(root->right,path,flag,pathlen,k);
	}
}

void printpath(struct node*root,int k)
{
	int flag=0;
	int path[100];
	printpathrecurr(root,path,0,flag,k);

}

int main()
{
	
	struct node*root=new node(10);
	root->left=new node(5);
	root->right=new node(8);
	root->left->left=new node(29);
	root->left->left->left=new node(20);
	root->left->right=new node(2);
	root->right->left=new node(1);
	root->right->right=new node(98);
	root->right->right->right=new node(50);
	
	int k=25;
	
	printpath(root,k);
}
