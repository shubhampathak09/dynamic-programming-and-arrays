//
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

// tree is a bst

struct node*insert(struct node*root,int val)
{
	if(root==NULL)
	return new node(val);
	
	if(val<root->data)
	root->left=insert(root->left,val);
	else
	root->right=insert(root->right,val);
	
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

struct node*lca(struct node*root,int n1,int n2)
{
	
	while(root!=NULL)
	{
	
	
	if(root->data<n1&&root->data<n2)
	{
		root=root->right;
	}
	else if(root->data>n1&&root->data>n2)
	{
		root=root->right;
	}
	else
	break;
}
return root;
}
int main()
{
	
	struct node*root=NULL;
	
	root=insert(root,6); //     6
	insert(root,9);      //   5   9
	                    //  4      7   
	insert(root,7);
	insert(root,5);
	
	insert(root,4);
	
	inorder(root);
	
	cout<<endl;
	
	cout<<"prnting the lca.."<<endl;
	
	cout<<lca(root,4,7)->data;
}
