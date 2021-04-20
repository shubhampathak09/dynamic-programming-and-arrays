#include<bits/stdc++.h>
using namespace std;

struct trienode
{
	int data;
    struct trienode*left;
    struct trienode*right;
    //trienode()
    trienode()
	{
		this->data=0;
		left=NULL;
		right=NULL;
	 } 
};


void insert(struct trienode*root,int prefixxor)
{
	struct trienode*curr=root;
	
	for(int i=31;i>=0;i--)
	{
		int b=(1<<i)&prefixxor;
		
		if(b==0)
		{
			if(curr->left==NULL)
			{
				curr->left=new trienode;
			}
			curr=curr->left;
		}
		else
		{
			if(curr->right==NULL)
			{
				curr->right=new trienode;
				
			}
			curr=curr->right;
		}
		
	}
	curr->data=prefixxor;
}

int query(struct trienode*root,int prefixxor)
{
	
	struct trienode*curr=root;
	
	for(int i=31;i>=0;i--)
	{
		int b=(1<<i)&prefixxor;
		
		if(b==0)
		{
			if(curr->right)
			{
				curr=curr->right;
			}
			else
			curr=curr->left;
		}
		else
		{
			if(curr->left)
			{
				curr=curr->left;
			}
			else
			curr=curr->right;
		}
	}
	return (prefixxor^curr->data);
}

int max_subarray_xor(int a[],int k,struct trienode*root)
{
	
	
	
	insert(root,0);
	
	int max_x=INT_MIN;
	int prefixxor=0;
	
	for(int i=0;i<k;i++)
	{
		
		prefixxor=prefixxor^a[i];
		insert(root,prefixxor);
		
		max_x=max(max_x,query(root,prefixxor));
	}
	
	
	return max_x;
}

int main()
{
	struct trienode*root=new trienode();
	
	int a[]={8,1,2,12};
	
	int k=sizeof(a)/sizeof(a[0]);
	
	int ans=max_subarray_xor(a,k,root);
	
	
	cout<<ans;
	
	//o(nlog(maxelemnt))
}
