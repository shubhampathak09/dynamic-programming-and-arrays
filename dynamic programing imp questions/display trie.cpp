// display a trie

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
		
		this->isend=false;
	}
};


void insert(struct trie*root,string s)
{
	
	struct trie*curr=root;
	
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		
		if(curr->child[i]==NULL)
		{
			curr->child[i]=new trie();
		}
		curr=curr->child[i];
	}
	
	curr->isend=true;
}

bool isLeafNode(struct trie* root)
{
    return root->isend != false;
} 
//void display(struct trie*root,string sa)
//{
//	
//	if(isLeafNode(root))
//	{
//		
//		cout<<sa<<endl;
//		return;
//	}
//	
//	for(int i=0;i<26;i++)
//	{
//		if(root->child[i])
//		{
//			sa.push_back(i+'a');
//			display(root,sa);
//			sa.pop_back();
//		}
//	}
//	
// } 
void display(struct trie* root, string str)
{
    // If node is leaf node, it indicates end
    // of string, so a null character is added
    // and string is displayed
    if (root->isend==true) 
    {
       // str[level] = '\0';
     // str.push_back('\0');
        cout << str << endl;
    }
  
  //  int i;
    for (int i = 0; i < 26; i++) 
    {
        // if NON NULL child is found
        // add parent key to str and
        // call the display function recursively
        // for child node
        if (root->child[i]) 
        {
            //str[level] = i + 'a';
            str.push_back(i+'a');
            display(root->child[i], str);
            str.pop_back();
			        }
    }
}	

int main()
{
	
	struct trie*root=new trie();
	
	insert(root,"the");
	insert(root,"a");
	insert(root,"three");
	insert(root,"answer");
//	
	string sa="";
//	int pos=0;
	display(root,sa);
	
}

//fuck it

