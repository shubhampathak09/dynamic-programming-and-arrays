// Lexicographic sorting of string
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

void display(struct trie*root,string cur)
{
	
	if(root->isend==true)
	{
		cout<<cur<<endl;
		//return;
	}
	
	for(int i=0;i<26;i++)
	{
		if(root->child[i])
		{
			//root=root->child[i];
			cur.push_back('a'+i);
			display(root->child[i],cur);
			cur.pop_back();
		}
	}
	
}

int main()
{
	
	struct trie*root=new trie();
	
	vector<string>keys={ "the", "a", "there", "answer",
                       "any", "by", "bye", "their" };
	
	
	for(int i=0;i<keys.size();i++)
	insert(root,keys[i]);
	
	string cur;
	
	display(root,cur);
}
