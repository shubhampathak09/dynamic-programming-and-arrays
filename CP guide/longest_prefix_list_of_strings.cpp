// longest common prefix such in list of strings

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



int index;

bool isleaf(struct trie*root)
{
	for(int i=0;i<26;i++)
	{
		if(root->child[i]!=NULL)
		return false;
	}
	return true;
}

int countnodes(struct trie*root)
{
	struct trie*curr=root;
	int count=0;
	
	for(int i=0;i<26;i++)
	{
		if(curr->child[i]!=NULL)
		{
			count++;
			index=i;
		}
	}
	return count;
}


void insert(struct trie*root,string s)
{
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int ind=s[i]-'a';
		if(curr->child[ind]==NULL)
		{
			curr->child[ind]=new trie();
		}
		curr=curr->child[ind];
	}
	curr->isend=true;
}

string walktrie(struct trie*root,string prefix)
{
	
	struct trie*curr=root;
	
	while(countnodes(curr)==1&&isleaf(curr)==false)
	{
		curr=curr->child[index];
		prefix.push_back('a'+index);
	}
	return prefix;
}

//bool isleaf(struct trie*root)
//{
////	return root->isend; this is not true as it indicate just the word
//    for(int i=0;i<26;i++)
//    {
//    	if(root->child[i]!=NULL)
//    	return false;
//	}
//  return root->isend();	
//}

int main()
{
	
	struct trie*root=new trie();
	
	insert(root,"geeksforgeeks");
	
	insert(root,"geeks");
	
	insert(root,"geek");
	
	insert(root,"geezer");
	
   string prefix;
    
	cout<<walktrie(root,prefix);
	
	
}
