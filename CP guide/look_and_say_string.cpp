// look and say

#include<bits/stdc++.h>
using namespace std;


string lookandsay(int n)
{
	vector<string>list;
	int k=0;
	
	list.push_back("1");
	k++;
	
	if(n==1)
	{
		return "1";
	}
	while(k<n)
	{
    k++;
	int count=1;
	string s="";
	string temp=list[k-1];
	//cout<<temp;
	for(int i=0;i<temp.size()-1;i++)
		{
		
			if(temp[i]==temp[i+1])
			count++;
			else
			{
				//string st(1,temp[i-1]);
				//s.push_back(to_string(count)+st);
				s+=count+temp[i-1];
				count=1;
			}
		}
		list.push_back(s);
   }
   return list[n-1];	 	
}

// seems some issue but logic looks correct	


int main()
{
	cout<<lookandsay(3);
}
