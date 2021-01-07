#include<bits/stdc++.h>
using namespace std;


void slider(int a[],int n,int k)
{
	
	vector<int>result;
    queue<int>q;
	
	int i=0,j=0;
	
	while(j<n)
	{
		if(a[j]<0)
		q.push(a[j]);
		
		if(j-i+1<k)
		{
			j++;
		}
		else if(j-i+1==k)
		{
			if(q.empty())
			result.push_back(0);//	cout<<q.size();
			else
			{
			//	cout<<q.front();
				result.push_back(q.front());
				
				if(a[i]==q.front())
				{
			//	cout<<"dc";	
				q.pop();
			//	cout<<q.size();
		//		cout<<q.front();	
				}
				i++;
				j++;
			}
		}
	}
	
	for(auto x:result)
	{
		cout<<x<<" ";
	}
}

int main()
{
 //cout<<"Hello";
 
 int a[]={-4,3,-3,1,2,-6,2,2,1};
 
 int n=sizeof(a)/sizeof(a[0]);
 
 int k=3;
 
 slider(a,n,k);
}
