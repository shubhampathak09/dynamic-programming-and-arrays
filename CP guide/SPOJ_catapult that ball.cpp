//THRBL - Catapult that ball


// also can use binary search

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
int n,cats;

cin>>n>>cats;
 

vector<int>a(n);

int ans=0;

	
	
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//cout<<"test1";
	
	vector<int>log_table(a.size()+1,0);
	
	
for(int i=2;i<log_table.size();i++)
{
	log_table[i]=log_table[i/2]+1;
	}	
//	cout<<"test2";


vector<vector<int>>sparse_table(log_table.back()+1,vector<int>(a.size()));

sparse_table[0]=a;

for(int i=1;i<sparse_table.size();i++)
{
	for(int j=0;j+(1<<i)<=a.size();j++)
	{
		sparse_table[i][j]=max(sparse_table[i-1][j],sparse_table[i-1][j+(1<<i)/2]);
			}
}

//cout<<"test3";
	
int q;

q=cats;


while(q--)
{
	
	int l,r; //1 index ranges
	cin>>l>>r;
	l=l-1,r=r-1;
//	cout<<l<<r;
	int log=log_table[r-l+1];
	int maximum=max(sparse_table[log][l],sparse_table[log][r-(1<<log)+1]);
	
	if(a[l]==maximum)
	ans++;
	
		}		
	if(ans>cats)
	{
		cout<<cats;
	}
	else
	cout<<ans;
}

int main()
{
	
	solve();
	
	
	
	
}
/*

Input:
7 3
2 3 5 4 2 1 6
3 5
2 5
4 6

Output:
2

Bob can catapult ball number 1 and 3.
*/
