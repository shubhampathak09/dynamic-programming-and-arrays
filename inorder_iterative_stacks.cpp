// inorder traversal using rescursion

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

void inorder(struct node*root)
{
	
	struct node*curr=root;
	
	bool flag=true;
	
	stack<node*>s;
	
	while(flag)
	{
		
	if(curr!=NULL)
	{
		
		s.push(curr);
		curr=curr->left;
		}	
		else
		{
			
			if(!s.empty())
			{
				curr=s.top();
				s.pop();
				cout<<curr->data<<" ";
				curr=curr->right;
			}
			else
			{
				flag=false;
			}
		}
	}
}


int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	inorder(root);	
}
