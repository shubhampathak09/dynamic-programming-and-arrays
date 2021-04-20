
#include<bits/stdc++.h>
using namespace std;

struct trienode
{
	struct trienode *left;
	struct trienode *right;
	
	trienode()
	{
		left=NULL;
		right=NULL;
	}
};


void insert(struct trienode*root,int x)
{
	
	struct trienode*curr=root;
	
	for(int j=31;j>=0;j--)
	{
		int b=(1<<j)&x;
		
		if(b==0)
		{
			if(curr->left==NULL)
			{
				curr->left=new trienode();
			}
			curr=curr->left;
		}
		else{
			if(curr->right==NULL)
			{
				curr->right=new trienode();
			}
			curr=curr->right;
		}
	}
	
}

int max_xor(int a[],int n,struct trienode*root)
{
	struct trienode*curr=root;
	
	int ans=INT_MIN;
	
	for(int k=0;k<n;k++)
	{
	//	cout<<1<<" ";
	int val=a[k];
    int pef=0;
	for(int j=3;j>=0;j--)
	{
		int b=(1<<j)&val;
		
		
		if(b==0)
		{
			if(curr->right!=NULL)
			{
				pef+=pow(2,j);
				curr=curr->right;
				
			}
			else
			{
				curr=curr->left;
			}
		}
		else if(b==1)
		{
			if(curr->left)
			{
				curr=curr->left;
				pef+=pow(2,j);
			}
			else
			{
				curr=curr->right;
			}
		}
			}	
			if(pef>ans)
			{
				ans=pef;
			}
			 	
	}
	
	return ans;
//	int pef=0;
	
	
}

int main()
{
	
		int a[]={8,1,2,15,10,5};
	
	    int n=6;
	    
	    struct trienode*root=new trienode();
	    
	    for(int i=0;i<n;i++)
	    {
	    	insert(root,a[i]);
		}
	
	    int result=max_xor(a,n,root);


        cout<<result;
}


// fuck it again

