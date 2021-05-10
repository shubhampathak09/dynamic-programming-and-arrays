// longest common prefix

#include<bits/stdc++.h>
using namespace std;


struct trie
{
	
	trie *child[26];
	bool isleaf;
	
	trie()
	{
		for(int i=0;i<26;i++)
		child[i]=NULL;
		isleaf=false;
	}
};


void insert(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		if(curr->child[i]==NULL)
		{
			curr->child[i]=new trie();
		}
		curr=curr->child[i];
	}
	
	curr->isleaf=true;
}



int coutnode(struct trie*root,int*index)
{
	
	int count=0;
//	int index;
	
	for(int i=0;i<26;i++)
	{
		if(root->child[i])
		{
			++count;
			*index=i;
		}
	}
	return count;
}


string walk(struct trie*root)
{
	
	struct trie*curr=root;
	int index;
	string prefix;
	while(coutnode(curr,&index)==1&&curr->isleaf==false)
	{
		
		curr=curr->child[index];
		prefix.push_back('a'+index);
	}
	return prefix;
}
int main()
{
	
 
	 
	
 
	
	
	
}
