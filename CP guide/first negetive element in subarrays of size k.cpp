// sliding window
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
 int a[] = {12, -1, -7, 8, -15, 30, 16, 28};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	queue<int>q;
	
	
	int i=0,j=0;
	
	int k=3;
	
	vector<int>result;
	
	while(j<n)
	{
	//	cout<<1;
		
		if(a[j]<0)
		q.push(a[j]);
		
		if(j-i+1<k)
		{
			j++;
		}
		else if(j-i+1==k)
		{
			
			if(q.empty()==true)
			{
				result.push_back(0);
				i++;
				j++;
			}
			
			else
			{
				result.push_back(q.front());
				if(a[i]==q.front())
				q.pop();
				i++;
				j++;
			}
			//i++
			//j++
		}
	}

	for(auto x:result)
	{
		cout<<x<<" ";
	}
}
