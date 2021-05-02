
// think again and implement
// cool

#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie *child[26];
	
	bool isend;
	
	int frq;
	
	trie()
	{
		
		for(int i=0;i<26;i++)
		child[i]=NULL;
		isend=false;
		frq=0;
		
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
		curr->frq++;
	}
	curr->isend=true;
}


void prefix(struct trie*root,string currword)
{
	
	if(root==NULL)
	return;
	
	if(root->frq==1)
	{
		cout<<currword<<endl;
		return;
	}
	
	for(int i=0;i<26;i++)
	{
		if(root->child[i]!=NULL)
		{
			currword.push_back('a'+i);
			prefix(root->child[i],currword);
			currword.pop_back();
		}
	}
	
}

int main()
{
	
struct trie*root=new trie();	
	
vector<string>words={"and","bool","bonfire","catch","case","char"};

for(auto x:words)
insert(root,x);
//cout<<x;
//insert(root,x);
	
string currword;	
prefix(root,currword);	

//sorted order	
	
}

// map based optimisation
