#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie*child[26];
	bool isend;
	
	trie()
	{
	    for(int i=0;i<26;i++)
	    child[i]=NULL;
	    
		isend=false;
	}
};


void insert(struct trie*root,string key)
{
	struct trie*curr=root;
	
	for(auto ch:key)
	{
		int index=ch-'a';
		if(curr->child[index]==NULL)
		{
		//	curr=curr->child[index]; wtf is this???????
		    curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isend=true;
}

bool search(struct trie*root,string key)
{
	struct trie*curr=root;
	
	for(auto ch:key)
	{
		int index=ch-'a';
		if(curr->child[index]==NULL)
		return false;
		curr=curr->child[index];
	}
	
	return curr->isend;
}


int main()
{
	
	struct trie*root=new trie();
 
    insert(root,"fat");
    
    insert(root,"cat");
    
    insert(root,"squirrel");
    
    cout<<search(root,"squire")<<"\t";
    
    cout<<search(root,"cat");
    //cout<<"dcv";
 
	
}
