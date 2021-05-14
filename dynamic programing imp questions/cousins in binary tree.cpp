#include<bits/stdc++.h>
using namespace std;
 


//struct node*root;

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
 
 
int find_height(struct node*curr,int height,int &parent,int val)
{
	
	if(curr==NULL)
	return 0;
	
	if(curr->data==val)
	{
		return height;
	}
	parent=curr->data;
	int left=find_height(curr->left,height+1,parent,val);
	if(left!=0)
	return left;
	parent=curr->data;
	int right=find_height(curr->right,height+1,parent,val);
	return right;
 } 


bool arecousins(struct node*root,int x,int y)
{
	
	if(root->data==x||root->data==y)
	return 0;
	
	
	int xparent=-1;
	int xheight=find_height(root,0,xparent,x);
	
	int yparent=-1;
	int yheight=find_height(root,0,yparent,y);
	
	if(xparent!=yparent&&xheight==yheight)
	return 1;
	
	return 0;
}

int main()
{
	
	// test case
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	root->left->left=new node(4);
	root->left->right=new node(5);
	
	root->right->left=new node(6);
	
	// two tests
	
	cout<<arecousins(root,4,6);  // these node are cousins
	
	cout<<endl;
	
	cout<<arecousins(root,4,5); // these are not
}
