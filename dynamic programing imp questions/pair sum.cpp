// pairs

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	vector<int>a={};
	
	int n=a.size();
	
	
	set<int>s;
	vector<int>res;
	int sum=;
	for(int i=0;i<n;i++)
	{
		
		
		if(s.find(sum-a[i])!=s.end())
		{
			res.push_back(a[i]);
			res.push_back(sum-a[i]);
		//	cout<<a[i]<<" "<<sum-a[i];
		break;
		}
		
		s.insert(a[i]);
	}
	
	if(res.size()==0)
	{
		cout<<"no such pair";
	}
	else
	cout<<res[0]<<" "<<res[1];
}
