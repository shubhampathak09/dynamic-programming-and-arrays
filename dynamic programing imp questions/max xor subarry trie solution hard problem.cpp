#include<bits/stdc++.h>
using namespace std;

struct trienode
{
	trienode*left;
	trienode*right;
	int val;
	
	trienode()
	{
		left=NULL;
		right=NULL;
		this->val=0;
	}
};

void insert(struct trienode*root,int prexor)
{
	
	struct trienode*curr=root;
	
	for(int i=31;i>=0;i--)
	{
		int b=(1<<i)&prexor;
		
		if(b==0)
		{
			if(curr->left==NULL)
			{
				curr->left=new trienode();
				
			}
			curr=curr->left;
		}
		else
		{
			if(curr->right==NULL)
			{
				curr->right=new trienode();
			}
		//	curr->right=new trienode(); wtf is this
		    curr=curr->right;
		}
	}
	
	curr->val=prexor;
}

int query(struct trienode*root,int prexor)
{
	
	struct trienode*curr=root;
	
	for(int i=31;i>=0;i--)
	{
	//	int b=(1<<i)*prexor;  why this???
	    int b=(1<<i)&prexor;
		if(b==0)
		{
			if(curr->right)
			{
				curr=curr->right;
			}
			else
			{
				curr=curr->left;
			}
		}
		else
		{
			if(curr->left)
			{
				curr=curr->left;
			}
			else
			{
				curr=curr->right;
			}
		}
	}
	return prexor^curr->val;
}

int maxsubarray(int a[],int n)
{
	struct trienode*root=new trienode();
	insert(root,0);
	int res=INT_MIN;
	int prexor=0;
	for(int i=0;i<n;i++)
	{
	//	struct trienode*curr=root;
		prexor^=a[i];
		insert(root,prexor);
		
		res=max(res,query(root,prexor));
	}
	
	return res;
}

int main()
{
	
	int a[]={8,1,2,12};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int ans=maxsubarray(a,n);
	
	cout<<ans;
}
