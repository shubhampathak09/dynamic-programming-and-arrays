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


void rightview(struct node*root)
{
	
	queue<node*>q;
	
	q.push(root);
	
	
	while(!q.empty()){
		
		
		int sz=q.size();
		
		for(int i=1;i<=sz;i++)
		{
		
		auto x=q.front();
		q.pop();
		if(i==sz)
		{
			cout<<x->data<<" ";
			}
			if(x->left!=NULL)
			q.push(x->left);
			if(x->right!=NULL)
			q.push(x->right);	
		}
		
		
	}
}

int main()
{
	
	struct node*root=new node(1);

root->left=new node(2);

root->right=new node(3);

root->left->left=new node(4);

root->right->right=new node(5);

root->right->right->right=new node(6);


rightview(root);


// 1 3 5 6
}
