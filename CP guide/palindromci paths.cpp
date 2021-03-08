// palindromic paths
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

bool ispalindrome(string s)
{
	string temp=s;
	reverse(temp.begin(),temp.end());
	return s==temp ? 1 : 0;
}

void printpalindromicpath(string s)
{
	if(ispalindrome(s))
	{
		cout<<s<<endl;
	}
}


void palindromicpath(struct node*root,string s)
{
	if(root==NULL)
	return;
	
	s=to_string(root->data)+s;
	if(root->left==NULL&&root->right==NULL)
	{
		printpalindromicpath(s);
	}
	else
	{
		palindromicpath(root->left,s);
		palindromicpath(root->right,s);
	}
}

 


int main()
{
 /*       2 
          /    \ 
         6     8 
            / \ 
           8   5 
          / \ / \ 
          1 2 3 8 
               /
              2
    */


struct node*root=new node(2);
root->left=new node(6);
root->right=new node(8);

root->right->left = new node(8);
root->right->right = new node(5);
 
    root->right->left->left = new node(1);
    root->right->left->right = new node(2);
    root->right->right->left = new node(3);
    root->right->right->right = new node(8);
    root->right->right->right->left = new node(2);
 	
//string s="";

palindromicpath(root,"");	
}
