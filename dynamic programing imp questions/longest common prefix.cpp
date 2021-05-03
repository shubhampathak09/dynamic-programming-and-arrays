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
	
 } ;


void insert(struct trie*root,string word)
{
	struct trie*curr=root;
	
	for(int i=0;i<word.length();i++)
	{
		int index=word[i]-'a';
		if(curr->child[i]==NULL)
		{
			curr->child[i]=new trie();
		}
		curr=curr->child[i];
	}
	curr->isend=true;
}

bool countchild(struct trie*node,int &index)
{
	
	int cnt=0;
	
	for(int i=0;i<26;i++)
	{
		if(node->child[i])
		{
			cnt++;
			index=i;
			//cout<<index;
		}
	}
	if(cnt==1)
	{
   // cout<<index;	
	return true;
}
	return false;
}

string lcs(struct trie*root)
{
	int index;
	struct trie*curr=root;
	string temp; 
	while(countchild(curr,index)&&curr->isend==false)
	{
		curr=curr->child[index];
		temp.push_back('a'+index);
	}
	return temp;
}
 
int main()
{
		string dict[] =
    {
        "code", "coder", "coding", "codable", "codec", "codecs", "coded",
        "codeless", "codependence", "codependency", "codependent",
        "codependents", "codes", "codesign", "codesigned", "codeveloped",
        "codeveloper", "codex", "codify", "codiscovered", "codrive"
    };
    
    
    int n=sizeof(dict)/sizeof(dict[0]);
    
    struct trie*root=new trie();
    
    for(int i=0;i<n;i++)
    {
    	insert(root,dict[i]);
	}
    
    cout<<lcs(root);
}

// abcd??? wtf
