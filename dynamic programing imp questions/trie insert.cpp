#include<bits/stdc++.h>
using namespace std;

struct trie
{
	
	//char data;
	trie*child[26];
	bool isend;
	
	trie()
	{
		for(int i=0;i<26;i++)
		child[i]=NULL;
		
		isend=false;
	}
	
};


void insert(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		
		if(curr->child[index]==NULL)
		{
			curr->child[index]=new trie;
		}
		curr=curr->child[index];
	}
	curr->isend=true;
}

bool search(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		
		if(curr->child[index])
		{
			curr=curr->child[index];
		}
		else
		{
			return false;
		}
	}
	return curr->isend==true;
}

int main()
{
	
	struct trie*root=new trie;
	
	
	insert(root,"cat");
	insert(root,"rat");
	insert(root,"cap");
	
	cout<<search(root,"cat");
	cout<<endl;
	cout<<search(root,"cap");
	cout<<endl;
	cout<<search(root,"ca");
}

// trie insert and search


// autocompleteion is the most imp application of trie
// suggestions also
