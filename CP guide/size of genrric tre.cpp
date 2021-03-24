// size of generic tree
#include<bits/stdc++.h>
using namespace std;


struct node
{
	
	int data;
	struct vector<node*>child;
	
};

struct node*root;

void build() 
	{
		root=new node();
		
		int a[]={10,20,-1,30,50,-1,60,-1,-1,40,-1,-1};
		
		int n=sizeof(a)/sizeof(a[0]);
		
		stack<node*>st;
		
		for(int i=0;i<n;i++)
		{
			
		if(a[i]==-1)
		{
			st.pop();
			}	
		else
		{
			
			if(st.size()>0)
			{
				struct node*tmp=new node();
				tmp->data=a[i];
				(st.top()->child).push_back(tmp);
				st.push(tmp);
			}
			else
			{
				root->data=a[i];
				st.push(root);
			}
			}	
			
		}
	}


int sz(struct node*root)
{
	
	if(root==NULL)
	return 0;
	
	int cnt=0;
	
	for(auto x:root->child)
	{
		cnt+=sz(x);
	}
	cnt=cnt+1;
	
	return cnt;
}

int main()
{
	
	build();
	
	cout<<root->data;
	
	
	cout<<endl;
	
	cout<<"size of given tree is..";
	
	cout<<sz(root);
}
