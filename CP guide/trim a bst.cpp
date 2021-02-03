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

struct node*trimbinarytree(struct node*root,int low,int high)
{
	if(root==NULL)
	{
		return NULL;
		
	}
	
   root->left=trimbinarytree(root->left,low,high);
   root->right=trimbinarytree(root->right,low,high);
   
   
   if(root->data>high)
   {
   	struct node*temp=root->left;
   	delete(root);
   	return temp;
   }
   if(root->data<low)
   {
   	struct node *temp=root->right;
   	delete(root);
   	return temp;
   }
   return root;
}

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	
	struct node*root=new node(14);
	root->left=new node(10);
	root->right=new node(17);
	root->left->left=new node(8);
	
	inorder(root);
	
	cout<<endl;
	
	struct node*newroot=trimbinarytree(root,10,14);
	
	inorder(newroot);
}
