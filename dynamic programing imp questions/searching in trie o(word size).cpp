// trie search
#include<bits/stdc++.h>
using namespace std;

struct trie
{
	trie*child[26];
	
	bool isleaf;
	
	trie()
	{
		for(int i=0;i<26;i++)
		{
			this->child[i]=NULL;
			
		}
		this->isleaf=false;
	}
};



void insert(struct trie*root,string word)
{
	struct trie*curr=root;
	
	for(int i=0;i<word.length();i++)
	{
		int index=word[i]-'a';
		if(curr->child[index]==NULL)
		{
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isleaf=true;
//	cout<<curr->isleaf<<endl;
}




bool search(struct trie*root,string word)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<word.length();i++)
	{
	int index=word[i]-'a';
	
	if(curr->child[index])
	{
		curr=curr->child[index];
		}
		else
		{
			return false;
			}	
	}
	
    if(curr->isleaf==true)
    return true;
    else
    return false;
}
int main()
{
	
	vector<string>dict={"deaf","lack","sad","apple","ape","gate","gatekeeper"};
	
	struct trie*root=new trie();
	
	for(auto x:dict)
	{
		insert(root,x);
	}

  //  insert(root,"deaf");
//    insert(root,"apple");
	
    cout<<search(root,"apple");	
    cout<<search(root,"dr");
	// fuck
}
