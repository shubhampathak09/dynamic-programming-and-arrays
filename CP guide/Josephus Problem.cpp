// Josephus problem

#include<bits/stdc++.h>
using namespace std;

void survive(vector<int>people,int k,int move,int &ans)
{
	if(people.size()==1)
	{
		ans=people[0];
		return;
	}
	
	int temp=(move+k)%people.size();
	people.erase(people.begin()+temp);
	survive(people,k,temp,ans); // elements willm shift bit index will remain same

}

int main()
{
	
	int ans=-1;
	
	
	int n=5;
	int k=2;
	
	vector<int>people;
	
	for(int i=0;i<5;i++)
	{
		people.push_back(i+1);
	}
	
	k--;  // that current index is also included so k--. o/w fine
	
	survive(people,k,0,ans);
	
	cout<<ans;
	
	    
}
