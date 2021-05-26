// Busy life

#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	return p1.second<p2.second;
}
int countActivities(vector<pair<int,int>>activites)
{
	
	
	int n=activites.size();
	
	sort(activites.begin(),activites.end(),cmp);
	
	int count =1;
	
	int last=activites[0].second;
	
	
	for(int i=1;i<n;i++)
	{
		
		if(activites[i].first>=last)
		{
			count++;
			last=activites[i].second;
		}
	}
    return count;	
}


int main()
{
	
	vector<pair<int,int>>v={{7,9},{0,10},{4,5},{8,9},{4,10},{5,7}};
	
	int ans=countActivities(v);
	
	cout<<ans;
}
