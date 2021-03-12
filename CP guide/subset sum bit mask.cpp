// subset sum using bit mask
#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<int>a;
//    int a[15];
	int n,t;
	int target;
//	int t;
	cin>>t;
	while(t--)
	{
//		int n;
		cin>>n;
	
		a.resize(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		cin>>target;
		
		int mask=(1<<n);
		
		bool flag=false;
		for(int i=0;i<mask;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				int check=(1<<j);
				if((i&check)!=0)
				{
					sum+=a[j];
				}
			}
			if(sum==target)
			{
			//	cout<<"exisits";
				flag=true;
			}
		}
		
		
		if(flag)
		{
			cout<<"YES"<<endl;
			break;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
}



/*
3
5
3 2 0 7 -1
8
YES
3
-1 3 3
4
NO
3
4 -5 1
5
YES
*/
