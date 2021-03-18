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

//int postindex=n;

int seain(int x,int in[],int st,int en)
{
	
	for(int i=st;i<=en;i++)
	if(in[i]==x)
	return i;
	return -1;
}

struct node*construct(int pos[],int in[],int st,int en)
{


if(st>en)
return NULL;

struct node*tnode=new node(pos[n--]);

if(st==en)
{
	return tnode;
	}
int ei=seain(tnode->data,in,st,en);
	
tnode->right=construct(pos,in,ei+1,en);
tnode->left=construct(pos,in,st,ei-1);
return tnode;		
}

void inorder(struct node*root)
{
	if(root==NULL)
	return;

	inorder(root->left);
		cout<<root->data<<" ";
	inorder(root->right);	
}

int main()
{
	
n=2;
int in[]={2,1,3};

int pos[]={2,3,1};	

struct node*root=construct(pos,in,0,2);


//cout<<root->data;

inorder(root);
//cout<<postindex;

//struct node*root=construct(pos,in,n-1,0);

//cout<<root->data;	


//fuck it
}
