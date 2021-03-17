//post order & inorder construct tree

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
		this->left=NULL;
		this->right=NULL;
	}
};

int n;

int postindex=n;

int seain(int x,int in[],int st,int en)
{
	
	for(int i=st;i<=en;i++)
	if(in[i]==x)
	return i;
	return -1;
}

struct node*construct(int pos[],int in[],int st,int en)
{


if(st<en)
return NULL;

struct node*tnode=new node(pos[postindex--]);

if(st==en)
{
	return tnode;
	}
int ei=seain(tnode->data,in,st,en);
	
tnode->left=construct(pos,in,ei-1,st);
tnode->right=construct(pos,in,en,ei+1);
return tnode;		
}

int main()
{
	
n=3;
int in[]={2,1,3};

int pos[]={2,3,1};	


struct node*root=construct(pos,in,n-1,0);

cout<<root->data;	


//fuck it
}
