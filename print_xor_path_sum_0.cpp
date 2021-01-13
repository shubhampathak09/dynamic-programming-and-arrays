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

bool checkxor(int path[],int n)
{
	
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
		ans^=path[i];
	}
//	cout<<ans;
	return ans==0;
}
 
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
//	cout<<1;
	if(root->left==NULL&&root->right==NULL)
	{
		if(!checkxor(path,pathlen))
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
	//cout<<"cfvf";
	int path[100];
	printpathrecurr(root,path,0);
  }  
  
int main()
{

struct node*root=new node(10);
root->left=new node(10);
root->right=new node(3);
root->right->left=new node(10);
root->right->right=new node(3);

root->right->left->left=new node(7);
root->right->left->right=new node(3);

root->right->right->left=new node(42);
root->right->right->right=new node(13);

root->right->right->right->left=new node(7);

//printpath(root);

printpath(root);
	
	
}
