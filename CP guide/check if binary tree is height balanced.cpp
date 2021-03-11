// check a height balanced binary tree or not

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

int height(struct node*root)
{
	
	if(root==NULL)
	return 0;
	
	int lheight=height(root->left);
	int rheight=height(root->right);
	
	if(lheight>rheight)
	return 1+lheight;
	else
	return 1+rheight;
	
}


bool checkheightbal(struct node*root)
{
	
	if(root==NULL)
	return 1;
	
	int left=height(root->left);
	int right=height(root->left);
	
	if(right-left<=1&&checkheightbal(root->left)&&checkheightbal(root->right))
	return true;
	else
	return false;
}

int main()
{
	
struct node *root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);

cout<<height(root);	
	
cout<<endl;
	
cout<<checkheightbal(root);	
}

// missed once case still need to master recursion in binary trees
// :p been quite long now
