/*HS08PAUL - A conjecture of 
Paul Erdos
*/

#include<bits/stdc++.h>
using namespace std;

const int mx=1e7;

bool a[mx];   //0
bool b[mx];   //0

void sieve()
{
	
	for(int i=1;i<=mx;i++)
	a[i]=1;
	a[0]=0;
	a[1]=0;
	
	for(int i=1;i<=mx;i++)
	b[i]=0;
	//b[0]=1;
	//b[1]=1;
	
	
	
	for(int i=2;i*i<=mx;i++)
	{
		if(a[i])
		{
			for(int j=i*i;j<=mx;j+=i)
			{
				a[i]=0;
			}
		}
		
	}
	int p,q;
	for(int i=1;p=(i*i)<=mx;i++)
	{
		for(int j=1;(q=(j*j*j*j)+p)<=mx;j++)
		{
			if(a[p+q])
			b[p+q]=1;
		}
	}
	
	int n=10;
	int ct=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i])
		{
			ct++;
		}
	}
	cout<<ct;
}

int main()
{
	
	sieve();
	
}


// fuck this shit man
//fuck
