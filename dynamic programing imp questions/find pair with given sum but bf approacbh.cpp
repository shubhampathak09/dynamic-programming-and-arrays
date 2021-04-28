#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={0,-1,2,-3,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int sum=-2;
	bool flag=false;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			
			int t1=a[i];
			int t2=a[j];
			
			if(t1+t2==sum)
			{
				flag=true;
				cout<<t1<<" "<<t2;
				break;
			}
		}
	}
	
	if(flag==false)
	{
		cout<<"No sucj pair exists";
	}
	return 0;
}


