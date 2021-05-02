#include<bits/stdc++.h>
using namespace std;

#define M 5
#define N 4


struct trie
{
	struct trie*child[2];
	bool isend;
	
	trie()
	{
		child[0]=child[1]=NULL;
		isend=false;
	}
};

bool insert(struct trie*root,int *arr)
{
	
	struct trie*curr=root;
	
	
	for(int i=0;i<N;i++)
	{
		if(curr->child[arr[i]]==NULL)
		{
			curr->child[arr[i]]=new trie();
		}
		curr=curr->child[arr[i]];
	}
	if(curr->isend)
	return false;
	
	return curr->isend=true;
}

int main()
{
	
	
   int mat[5][5]={{1,0,0,1,0},{0,1,1,0,0},{1,0,0,1,0},{0,0,1,1,0},{0,1,1,0,0}};
    
    struct trie*root=new trie();
    
    for(int i=0;i<M;i++)
    {
    	if(insert(root,mat[i])==false)
    	{
    		cout<<"Duplicate  found at "<<i+1<<endl;
		}
	}
    
    
}
