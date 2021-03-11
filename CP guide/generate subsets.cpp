// p2
seduo code henerating all subsets iterative

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	
	cin>>n;
	
	int tot=(1<<n);
	
	for(int N=0;N<tot;N++) // all numbers
	{
	 for(int i=0;i<n;i++)
	 {
	 	int f=(1<<i);
	 	if((N&f)!=0)
	 	cout<<i<<" ";
	 }
	 cout<<endl;
	}
	
	
	
	
	
	
	/*
	
	0 1 2 3 
	{}
	0  x x x x 2 2 2 2 =16 
	1  0 0 0 0
	   0 0  1 0 
	2 
	4
	
	
	0 0 0 0
	0 0 0 1
	0 0 1 0
	0 1 0 0
	1 0 0 0
	0 0 1 1
	}
	*/
	
}
