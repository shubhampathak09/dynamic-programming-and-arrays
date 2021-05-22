// max path sum between two leaf nodes
// strange
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

int maxpathsum_leaf(struct node*root,int &res)
{
	
	if(root==NULL)
	return 0;
	
	if(root->left==NULL&&root->right==NULL)
	return root->data;
	
	
	int left=maxpathsum_leaf(root->left,res);
	int right=maxpathsum_leaf(root->right,res);
	
	
	if(root->left==NULL)
	{
		
		return root->data+right;
		
	}
	
	if(root->right==NULL)
	{
		return root->data+left;
	}
	
	int temp=max(left,right)+root->data; // when this send ups
	
	// if this lead node
 
	
	int ans=max(temp,left+right+root->data);  // leaf to leaf;
	
	res=max(res,ans);
	
	return ans;
}


int main()
{
//	 
//	struct node*root=new node(-10);
//	root->left=new node(9);
//	root->right=new node(20);
//	root->right->left=new node(15);
//	root->right->right=new node(7);
//	
//	
	
	
	
    struct node *root = new node(-15);
    root->left = new node(5);
    root->right = new node(6);
    root->left->left = new node(-8);
    root->left->right = new node(1);
    root->left->left->left = new node(2);
    root->left->left->right = new node(6);
    root->right->left = new node(3);
    root->right->right = new node(9);
    root->right->right->right= new node(0);
    root->right->right->right->left= new node(4);
    root->right->right->right->right= new node(-1);
    root->right->right->right->right->left= new node(10);
	
	
	
	//cout<<root->data;
	
	
	
	int res=INT_MIN;
		
	int final=maxpathsum_leaf(root,res);	
	
	
//	cout<<final;  why i am returing final???

    cout<<res;
    
    
}
