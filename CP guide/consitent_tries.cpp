//


// some shit happenging here
#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie*child[26];
	bool isend;
	
	trie()
	{
		memset(child,0,sizeof(child));
		isend=false;
	}
};

bool isleaf(struct trie*root)
{
	for(int i=0;i<26;i++)
	{
		if(root->child[i]!=NULL)
		return false;
	}
	return true;
}

void insert(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		if(curr->child[index]==NULL)
		{
			curr->child[i]=new trie();
			
		}
		curr=curr->child[i];
	}
	
	curr->isend=true;
}

bool checkconsistent(struct trie*root)
{
	if(isleaf(root)==false&&root->isend==true)
	{
		return false;
	}
	
	if(isleaf(root))
	{
		return true;
	}
	
	for(int i=0;i<26;i++)
	{
		bool flag=false;
		if(root->child[i]!=NULL)
		{
		return flag||checkconsistent(root->child[i]); // not a consitent list	
		}
		//curr=curr->
		
	}
	
	//return true;
}

int main()
{
	
	struct trie*root=new trie();
	
	insert(root,"abd");
	
	insert(root,"abef");
	
	insert(root,"abde");
	
	cout<<checkconsistent(root);
	
}
