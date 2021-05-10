// test lcp

#include<bits/stdc++.h>
using namespace std;


struct trie
{

trie*child[26];
bool isend;

trie()
{
	
	for(int i=0;i<26;i++)
	{
		child[i]=NULL;
	}
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


int countnode(struct trie*root,int *index)
{
	
	int count=0;
	
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
	
	while(countnode(curr,&index)==1&&curr->isend==false)
	{
		curr=curr->child[index];
		prefix.push_back('a'+index);
	}
	
	return prefix;
}

int main()
{
	
	string s[]={"geeks","geek","geez","geeksforgeeks"};
	
	int n=sizeof(s)/sizeof(s[0]);
	
	//cout<<n;
	
	
	struct trie*root=new trie();
	
	for(int i=0;i<n;i++)
	{
		insert(root,s[i]);
	}
	
	
	cout<<walk(root);
}
