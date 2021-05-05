// print location where the paatern is found

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	string text="aaaaabaaaba";
	
	int m=text.length();
	
	string pattern="aaaa";
	
	int n=pattern.length();
	
	
	string preprocess=pattern+"#"+text;
	
	int o=preprocess.length();
	
	int prefix[o];
	
	prefix[0]=0;
	
	for(int i=1;i<o;i++)
	{
		int l=prefix[i-1];
		
		while(l>0&&preprocess[i]!=preprocess[l])
		{
			l=prefix[l-1];
		}
		
		if(preprocess[i]==preprocess[l])
		++l;
		prefix[i]=l;
	}
	/*
	for(int i=0;i<preprocess.length();i++)
	{
		cout<<prefix[i]<<" ";
	}
	*/
	int ind=pattern.length()+1;
	
//	cout<<ind;
    
	
		
	for(int k=ind;k<preprocess.length();k++)
	{
		cout<<k<<" ";
		if(preprocess[k]==pattern.length())
		{
			cout<<"Pattern found at"<<(k-pattern.length())+1<<endl;
			
		}
	}
}

//some mistakes
