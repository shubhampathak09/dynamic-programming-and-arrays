// permutation generator
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int>sample={1,2,3,4};
	sort(sample.begin(),sample.end());
	int cnt=0;
	do
	{
		cnt++;
		for(int i=0;i<sample.size();i++)
		{
			cout<<sample[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(sample.begin(),sample.end()));
	
	
	cout<<cnt;
}
