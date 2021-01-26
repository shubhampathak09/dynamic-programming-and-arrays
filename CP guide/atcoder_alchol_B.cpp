
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n,x;
	
	cin>>n>>x;
	
	float drunk_index=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int ai,bi;
		cin>>ai>>bi;
		
	    drunk_index+=(ai*bi*0.01);
		
		count++;
		
		if(drunk_index>x)
		{
			cout<<count<<endl;
			return;
			}	
	}
	cout<<-1<<endl;
	return;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	
	solve();
	
	}
}

/*
3
2 15
200 5
350 3
2
2 10
200 5
350 3
2
3 1000000
1000 100
1000 100
1000 100
-1
*/
