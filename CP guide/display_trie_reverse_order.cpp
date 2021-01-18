#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie*child[26];
	bool isend;
	
	trie()
	{
		memset(child,0,sizeof(child));
	}
};

void insert(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=25-(s[i]-'a');
	    if(curr->child[index]==NULL)
		{
			curr->child[index]=new trie();
			
			}
			curr=curr->child[index];	
	}
	curr->isend=true;
}

// sort in reverse order
//
void display(struct trie*root,char str[],int level)
{
	if(root->isend)
	{
		str[level]='\0';
		cout<<str<<endl;
	}
	
	int i;
	for(i=0;i<26;i++)
	{
		if(root->child[i]!=NULL)
		{
			str[level]=i+'a';
			display(root->child[i],str,level+1);
		}
	}
}

int main()
{
	
	struct trie*root=new trie();
	
	insert(root,"woods");
	insert(root,"apple");
	insert(root,"tax");
	insert(root,"zombies");
	 
	 char str[20];
	 
	display(root,str,0); 
}


// some shit need to figute this out latter
