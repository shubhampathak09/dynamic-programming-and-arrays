//.. height of tree


#include<bits/stdc++.h>
using namespace std;

// design a hypotheis

// height(root)


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


int height(struct node*root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int heightleft=height(root->left);
	
	int heightright=height(root->right);
	
	return  1+ max(heightleft,heightright);
}


int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	
	cout<<height(root);
	
}
