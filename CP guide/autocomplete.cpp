// autocomplete

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

void insert(struct trie*root,string s)
{
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		if(curr->child[index]==NULL)
		{
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isend=true;
}

bool search(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i,s.length();i++)
	{
		int index=s[i]-'a';
		if(curr->child[index]==NULL)
		{
			return false;
		}
		curr=curr->child[index];
	}
	
	return curr->isend;
}


bool islastnode(struct trie*root)
{
	
	for(int i=0;i<26;i++)
	{
		if(root->child[i])
		return false;
	}
	return true;
}


void suggestions(struct trie*root,string currentprefix)
{
	
 if(root->isend)
 {
 	cout<<currentprefix<<endl;
  
 }
 
 if(islastnode(root))
 {
 	return;
	 }	

 for(int i=0;i<26;i++)
 {
 	if(root->child[i]!=NULL)
 	{
 		currentprefix.push_back(i+'a');  
 		suggestions(root->child[i],currentprefix);
 		
 		currentprefix.pop_back();
	 }
 }
	
}


int autocomplete(struct trie*root,string query)
{
	struct trie*curr=root;
	
	int i;
	
	int n=query.length();
	
	for(i=0;i<n;i++)
	{
		int index=query[i]-'a';
		if(curr->child[index]==NULL)
		return 0;
		curr=curr->child[index];
	}
	
	bool isword=(curr->isend==true);
	bool islast=(islastnode(curr));
	
	if(isword&&islast)
	{
		cout<<query<<endl;
		return -1;
	}
	
	if(!islast)
	{
		string prefix=query;
		suggestions(curr,prefix);
	}
}
int main()
{
	
	struct trie*root=new trie();
	
	insert(root,"hello");
	insert(root,"dog");
	insert(root,"hell");
	insert(root,"cat");
	insert(root,"a");
	insert(root,"hel");
	insert(root,"help");
	insert(root,"helps");
	insert(root,"helps");
	insert(root,"helping");
	
	int cmp=autocomplete(root,"hel");
	
	// hello
	//hell
	//hel
	//help
	//helps
	//helping
	//
}
