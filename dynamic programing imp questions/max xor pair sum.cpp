#include<bits/stdc++.h>
using namespace std;

struct trienode
{
//	int data;
	struct trienode*left;
	struct trienode*right;
	
	trienode()
	{
		left=NULL;
		right=NULL;
		
	}
};


void insert(int val,struct trienode*root)
{
	
	
	struct trienode*curr=root;
	
	for(int i=31;i>=0;i--)
	{
		int b=(1<<i)&val;
		
		if(b==0)
		{
			if(!curr->left)
			{
				curr->left=new trienode();
			}
			curr=curr->left;
	}
	else
	{
		if(!curr->right)
		{
			curr->right=new trienode();
		}
		curr=curr->right;
	}
	
}
}

int maxpair(int a[],int n,struct trienode*root)
{
	
	int res=INT_MIN;
	for(int i=0;i<n;i++)
	{
		struct trienode*curr=root;
		int currsum=0;
		for(int j=31;j>=0;j--)
		{
			int b=(1<<j)&a[i];
			
			if(b==0)
			{
				if(curr->right)
				{
					curr=curr->right;
					currsum+=(1<<j);
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
					currsum+=(1<<j);
				}
				else
				curr=curr->right;
			}
		}
		if(currsum>res)
		res=currsum;
	}
	
	return res;
}

int main()
{
	
	int a[]={3,10,5,25,2,8};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	struct trienode*root=new trienode();
	
	for(int i=0;i<n;i++)
	{
		insert(a[i],root);
	}
	
	int ans=maxpair(a,n,root);
	
	cout<<ans;
	
}
