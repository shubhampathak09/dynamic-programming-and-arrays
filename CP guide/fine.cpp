// test same as see
#include<bits/stdc++.h>
using namespace std;


class trienode
{
	public:
	trienode*left;
	trienode*right;
};


void insert(int n,trienode*root)
{
	struct trienode*curr=root;
	
	for(int i=31;i>=0;i--)
	{
		int b=(1<<i)&n; 
		
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


int finmax(trienode*root,int *arr,int n)
{
		int max_xor=INT_MIN;
	for(int i=0;i<n;i++)
	{
	int value=arr[i];
	trienode*curr=root;
	int curr_xor=0;
	for(int j=31;j>=0;j--)
	{
		int b=(1<<j)&value;
		
		if(b==0)
		{
			if(curr->right)
			{
				curr_xor+=(1<<j);
				curr=curr->right;
			}else
			{
				curr=curr->left;
			}
		}else
		{
			if(curr->left)
			{   
			    curr_xor+=(1<<j);
				curr=curr->left;
			}else
			curr=curr->right;
		}
		
		
	}
	
	
	if(curr_xor>max_xor)
	{
	
	max_xor=curr_xor;
}
	}
	return max_xor;
}

int main()
{
 int arr[]={8,1,2,15,10,5};
 
 int n=sizeof(arr)/sizeof(arr[0]);
 
 trienode*root=new trienode();
 
 for(int i=0;i<n;i++)
 {
 	insert(arr[i],root);
 }
 
 int res=finmax(root,arr,n);
	
	
cout<<res;	
	
}
