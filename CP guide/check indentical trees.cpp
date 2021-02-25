// identical binary trees

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
		this->left=NULL;
		this->right=NULL;
	}
};

bool checkidentical(struct node*root1,struct node*root2)
{
	
	if(root1==NULL&&root2==NULL)
	return true;
	
	//if(root1==NULL||root2==NULL)
	//return false;
	
	return (root1->data==root2->data)&&checkidentical(root1->left,root2->left)&&checkidentical(root1->right,root2->right);
	
}

int main()
{
	
	struct node*r1=new node(1);
	r1->left=new node(2);
	r1->right=new node(3);
	
	struct node*r2=new node(1);
	r2->left=new node(2);
	r2->right=new node(2);
	
	cout<<checkidentical(r1,r2);
}
