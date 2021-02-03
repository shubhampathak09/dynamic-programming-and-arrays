// print path root to sum node

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

bool fndpath(struct node*root,int key,vector<int>&path)
{
	if(root==NULL)
	return false;
	
	path.push_back(root->data);
	
	if(root->data==key)
	return true;
	
	
	
	if((root->left!=NULL&&fndpath(root->left,key,path))||(root->right!=NULL&&fndpath(root->right,key,path)))
	return true;
	
	path.pop_back();
	return false;
}

int main()
{
	
struct node*root=new node(1);
root->left=new node(2);

root->right=new node(3);
root->right->right=new node(4);

vector<int>path;	
	
bool result=fndpath(root,4,path);
 
//cout<<result; 

//cout<<endl;

for(auto x:path)
{
	cout<<x<<" ";
	}	
}
