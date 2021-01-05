// ANAGRAM

#include<bits/stdc++.h>
using namespace std;

int cc;

int xors;
// count all occurnaces of anagram in a string
int slider(string s,int n,int k)
{
	
	int i=0,j=0;
	
	int ref=0;
	
	//cout<<ref;
	while(j<n)
	{
		ref=ref^s[j];
		
		if(j-i+1<k)
		j++;
		
		else if(j-i+1==k)
		{
		    cout<<ref<<"\n";
			if(ref==xors)
			{
			
			cc++;
			ref=0;
	}
			else
			{
		//		cout<<xors;
			ref=0;
			
		}
			i++;
			j++;
		}
	}
//	cout<<cc;
	return cc;
}

int main()
{
	
	 string S="fororfrdofr";
	 
	 string xs="for";
     
	 for(int i=0;i<xs.length();i++)
	 xors^=xs[i];
	 
	// cout<<xors;
	 
     cout<<slider(S,S.length(),3);	 
}
