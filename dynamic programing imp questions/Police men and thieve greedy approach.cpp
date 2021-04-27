#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	char a[]={'T','T','P','P','T','P'};
	
	int n=sizeof(a)/sizeof(a[0]);
	
//	cout<<n;
	
	int k=2;
	
	int visited[n];
	
	memset(visited,0,sizeof(visited));
	
	//cout<<visited[1];
	
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		//cout<<i<<" ";
		if(a[i]=='P')
		{
           // cout<<i<<" ";  2  3 5 ->p			
			for(int j=i-k;j<=i+k;j++)
			{   
			    //if(i==3)
			    //cout<<j<<" ";
			//	cout<<j<<" ";
			    if(j==i)
			    continue;
			    
				if(j>=0&&j<=n-1)
				{	//cout<<j<<" ";
				
					if(a[j]=='T'&&visited[j]==0)
					{
						//	cout<<j<<" ";
						count++;
						visited[j]=1;
					}
				}
				
			}
		}
		else
		{
			continue;
		}
	}
	
	cout<<count;
}


// fucking gg
