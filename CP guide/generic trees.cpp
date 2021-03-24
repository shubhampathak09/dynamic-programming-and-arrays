#include<bits/stdc++.h>
using namespace std;

struct node
{
	
	int data;
	vector<node*>child;
	
};


void display(struct node*root)
{
	
	if(root->child.size()==0)
	return;
	
	cout<<root->data<<" ";
	for(auto x:root->child)
	{
		cout<<x->data<<" ";
	}
    
	for(auto x:root->child)
	{
		display(x);
		}
//		return;	
}
 

int main()
{
	
	struct node*root=new node();
	
	int a[]={1,2,-1,3,-1,-1};
	
//	struct node*root=new node();
	
	int n=sizeof(a)/sizeof(a[0]);
	
	stack<node*>stk;
	
	for(int i=0;i<n;i++)
	{
		
		if(a[i]==-1)
		{
			stk.pop();
		}
		else
		{
			if(stk.size()>0)
			{
				struct node*tmp=new node();
				tmp->data=a[i];
				struct node*x=stk.top();
				(x->child).push_back(tmp);
				stk.push(tmp);
			}
			else
			{
				struct node*tmp=new node();
				root->data=a[i];
				//root=tmp;
				stk.push(root);
			}
		}
	}
	
  //  cout<<root->data;
   	
//   	for(auto m:root->child)
//   	{
//   		cout<<m->data<<" ";
//	   }
   	
	display(root);
	
}
