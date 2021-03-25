#include<bits/stdc++.h>
using namespace std;


int a[]={10,20,-1,30,50,-1,60,-1.-1,40,-1,-1};
struct node
{
	int data;
	vector<node*>child;
};


struct node*root;

void build()
{

	
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
				struct node*temp=new node();
				temp->data=a[i];
				(stk.top()->child).push_back(temp);
				stk.push(temp);
			}
			else
			{
				root->data=a[i];
				stk.push(root);
			}
		}
	}
	
	
}

int findmax(struct node*root)
{
	
	
	if(root==NULL)
	return 0;
	
	
	int mx=INT_MIN;
	
	for(auto x:root->child)
	{
		mx=max(findmax(x),mx);
	}
	mx=max(mx,root->data);
	return mx;
}


int height(struct node*root)
{
	if(root->child.size()==0)
	return 0;
	
	int h=INT_MIN;
	
	for(auto x:root->child)
	{
		h=max(h,height(x));
	}
	h=h+1;
	return h;
	
}

int main()
{
	
	root=new node();
	
	build();
	
//	cout<<root->data;

int x=findmax(root);

int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++)
{
	if(a[i]==x)
	{
		cout<<i<<endl;
		break;
	}
}

cout<<height(root);

//cout<<findmax(root);
}

//euler run
