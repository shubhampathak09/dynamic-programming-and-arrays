// word break trie

#include<bits/stdc++.h>
using namespace std;


struct trie
{
	trie*child[26];
	bool isend;
	
	trie()
	{
		for(int i=0;i<26;i++)
		child[i]=NULL;
		
		isend=false;
	}
};


void insert(string s,struct trie*root)
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
	
	 for(int i=0;i<s.length();i++)
	 {
	 	int index=s[i]-'a';
	 	if(curr->child[index]!=NULL)
	 	{
	 		curr=curr->child[index];
		 }
		 else
		 return false;
	 }
	return curr->isend==true;
}


bool wordbreak(string s,struct trie*root)
{
	int size=s.length();
	
	if(size==0)
	return true;
	
	for(int i=1;i<=size;i++)
	{
		if(search(root,s.substr(0,i))&&wordbreak(s.substr(i,size-i),root))
		return true;
	}
	return false;
}

int main()
{
	
	
	string dictionary[] = {"mobile","samsung","sam",
                           "sung","man","mango",
                           "icecream","and","go","i",
                           "like","ice","cream"};
	
	int n=sizeof(dictionary)/sizeof(dictionary[0]);
	
	struct trie*root=new trie();
	
	for(int i=0;i<n;i++)
	{
	//	cout<<dictionary[i]<<" ";
		insert(dictionary[i],root);
	}
	
	cout<<wordbreak("ilikesamsung",root)<<" ";
	cout<<wordbreak("iiiiii",root)<<" ";  //fuck
	cout<<wordbreak("samsungandmango",root)<<" ";
	cout<<wordbreak("samsungandmangok",root)<<" ";
}


//weeew  barely
