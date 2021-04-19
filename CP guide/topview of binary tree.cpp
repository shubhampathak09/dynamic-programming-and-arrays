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
		left=NULL;
		right=NULL;
		
	}
};


void topview(struct node*root)
{
	
	map<int,int>mp;  // gorizatan distance node value
	
	queue<pair<node*,int>>q;
	
	q.push({root,0});
	
	while(!q.empty())
	{
		auto temp=q.front();
		q.pop();
		
		if(mp.count(temp.second)==0)
		{
			mp[temp.second]=temp.first->data;
		}
		if(temp.first->left)
		{
			q.push({temp.first->left,temp.second-1});
		}
		if(temp.first->right)
		{
			q.push({temp.first->right,temp.second+1});
		}
	}
	
	for(auto x:mp)
	{
		cout<<x.second<<" ";
	}
}

int main()
{
	
		struct node*root=new node(1);

root->left=new node(2);

root->right=new node(3);

root->left->left=new node(4);

root->left->right=new node(5);

root->right->left=new node(6);

root->right->right=new node(7);

//root->right->right->right=new node(6);


topview(root);
	
}
