// mountains

#include<bits/stdc++.h>
using namespace std;


int peaks(int a[],int n)
{
	// starting and ending elements cant bee peak
	
	
	int largest=INT_MIN;
	
	for(int i=1;i<=n-2;)
	{
		
		
		if(a[i]>a[i-1]&&a[i]>a[i+1])
		{
			
			// some work
			int cnt=1;
			int j=i;
			// go backwords and count and far mountain extens
			
			while(j>=0&&a[j]>a[j-1])
			{
			
			cnt++;
			j--;
		}
			// go forwards and also count
			
			while(i<=n-1&&a[i]>a[i+1])
			{
				cnt++;
				i++;
			}
			
			if(cnt>largest)
			largest=cnt;
			
		}
		else
		{
			i++;
		}
		
	}
	
	
	return largest;
}

int main()
{
	
	
	int a[]={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<peaks(a,n);
	
	
}
