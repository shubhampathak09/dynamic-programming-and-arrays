#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	vector<int>a={5,3,1,6,9};
	
//	cout<<a.size();
	
	bool flag=1;
	
	while(a.size()!=1)
	{
		
		 if(flag==1)
	{
		a.erase(a.begin()+a.size()-1);
		flag=0;
	}
		
		else if(flag==0)
		{
		
		if(a[0]>a[a.size()-1])
		a.erase(a.begin()+0);
		else
		a.erase(a.begin()+a.size()-1);
		
		flag=1;
	}
	
	
	}
	
	cout<<a[0];
}
