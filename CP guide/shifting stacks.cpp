//
#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
	
	bool flag=1;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i-1];
		int need=(i*(i-1))/2;
		if(need>sum)
		{
			flag=0;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"NO";
		
	}
	else
	cout<<"YES";
	
	return;
}

int main()
{
	
	int n;
	
	cin>>n;
	
    int a[n];	
	
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//solve(a,n);
	
	
	
	
	solve(a,n);
}
