#include<bits/stdc++.h>
using namespace std;

struct trienode
{
	struct trienode*left;
	struct trienode*right;
	
	trienode()
{
	left=NULL;
	right=NULL;
}
};


void insert(struct trienode*head,int n)
{
	
	//cout<<"1";
	struct trienode*curr=head;
	
    for(int i=31;i>=0;i--)
	{
       int b=(1<<i)&n;
	 // cout<<b;
	// cout<<b; 
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

int findmax_xorpair(int a[],int n,struct trienode*head)
{
	
	struct trienode*curr=head;
	
	int max_xor=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int val=a[i];
		
		int curr_xor=0;
		
		for(int j=31;j>=0;j--)
		{
			int b=(1<<j)&val;
			
			if(b==0)
			{
				if(curr->right)
				{
					curr=curr->right;
					curr_xor+=(1<<j);
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
					curr_xor+=(1<<j);
				}
				else
				curr=curr->right;
			}
		}
		
		if(curr_xor>max_xor)
		max_xor=curr_xor;
	}
	return max_xor;
}



int main()
{
	
	int a[]={8,1,2,15,10,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	struct trienode*head=new trienode();
	
	for(int i=0;i<n;i++)
	{
		insert(head,a[i]);
	}
	
	
	cout<<findmax_xorpair(a,n,head);
	
}
