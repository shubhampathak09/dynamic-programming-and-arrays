// bst insert
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


struct node* insertbst(struct node*root,int val)
{
	
	if(root==NULL)
	return new node(val);
	
	if(val>root->data)
	root->right=insertbst(root->right,val);

    else
    root->left=insertbst(root->left,val);
    
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
	
	struct node*root=NULL;
	insertbst(root,20);
	
	insertbst(root,10);
	insertbst(root,35);
	insertbst(root,15);
     
		cout<<root->data; 
	 	
	insertbst(root,7);
	
	
	
	inorder(root);
	

}
