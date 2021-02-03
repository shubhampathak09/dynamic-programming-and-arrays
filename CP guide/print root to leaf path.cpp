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

void printpath(vector<int>path)
{
	for(int i=0;i<path.size();i++)
	{
		cout<<path[i]<<" ";
	}
}
void printroottoleaf(struct node*root,vector<int>path)
{
	
	if(root==NULL)                              //    1
	return;                                    //       3
	
	path.push_back(root->data);
//	pathlen++;
	if(root->left==NULL&&root->right==NULL)
	{
		printpath(path);
		cout<<endl;
	}
	
	printroottoleaf(root->left,path);
	printroottoleaf(root->right,path);
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	vector<int>path;
	
	printroottoleaf(root,path);
}
