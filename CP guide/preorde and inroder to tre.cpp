
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

int preindx=0;

int getin(int val,int in[],int start,int end)
{
	for(int i=start;i<=end;i++)
	{
		if(in[i]==val)
		{
			return i;
		}
	}
	return -1;
}
struct node*createtree(int preorder[],int inorder[],int start,int end)
{
//	static int preindx=0;
	if(start>end)
	{
		return NULL;
	}
	
	struct node*tnode=new node(preorder[preindx++]);
	if(start==end)
	{
		return tnode;
	}
	int  inindex=getin(tnode->data,inorder,start,end);
	tnode->left=createtree(preorder,inorder,start,inindex-1);
	tnode->right=createtree(preorder,inorder,inindex+1,end);
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
	
int in[]={2,1,3};
int pre[]={1,2,3};

int n=sizeof(in)/sizeof(in[0]);

struct node*root=createtree(pre,in,0,n-1);	

//cout<<root->data;

inorder(root);	
	
}
