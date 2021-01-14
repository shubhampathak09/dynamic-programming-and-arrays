#include<bits/stdc++.h>
using namespace std;

void kmp(string text,string pattern)
{
	
	string temp=pattern+"&"+text;
	
	int n=temp.length();
	
	int k=pattern.length();
	
	
	int prefix[n];
	
	prefix[0]=0;
	
	for(int i=1;i<n;i++)
	{
		int l=prefix[i-1];
		
		while(l>0&&temp[i]!=temp[l])
		{
			l=prefix[l-1];
		}
		if(temp[i]==temp[l])
        {
        	++l;
			}
			prefix[i]=l;	
	}
	
	
	bool flag=false;
	
	
	for(auto x: prefix)
	{
	//	cout<<x<<" ";
		if(x==k)
		{
			// match found
			flag=true;
		}
	}
	
	if(flag)
	{
		cout<<"String is rotation";
	}
	else
	{
		cout<<"String is not a rotation";
	}
}

int main()
{
	
	string s1="abcdef"; // original string
	
	string s2="defabc";  // rotated string
	
	string text=s1+s1;
	
	string pattern=s2;
	
	if(s1.length()==s2.length())
	kmp(text,pattern);
	else
	cout<<"not a valid rotation";
}























//////
////#include<bits/stdc++.h>
////using namespace std;
////
////void cal_prefix(string s3,int n)
////{
////	
////	int m=s3.length();
////	
////	int prefix[m];
////	
////	prefix[0]=0;
////	
////	for(int i=1;i<m;i++)
////	{
////		int l=prefix[i-1];
////		
////		while(l>0&&s3[i]!=s3[l])
////		{
////			l=prefix[l-1];
////		}
////		if(s3[i]==s3[l])
////		{
////			l++;
////		}
////		prefix[i]=l;
////	}
////	bool flag=false;
////	for(auto x:prefix)
////	{
////		if(x==n)
////		{
////			flag=true;
////		}
////		cout<<x<<" ";
////	}
////	cout<<endl;
////	if(flag)
////	{
////		cout<<"string is rotation of other string";
////	}
////	else
////	{
////		cout<<"no";
////	}
////}
////int main()
////{
////	
////	
////	string s1="abcdef";
////	
////	string s2="efabcd"; // pattern
////	
////	string s3=s1+s2;  // text
////	
////	string s4=s2+"$"+s3; // search for s2 in this 
////	
////	
////	int n=s1.length();
////	// abcdef$efabcd
////	cal_prefix(s4,n);
////}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//bool check_rotation(string s1,string s2)
//{
//	if(s1.length()!=s2.length())
//	{
//		return false
//;
//	}
//    
//	string temp=s1+s2;
//		
//	return (temp.find(s2)!=string ::npos); 
//}
//
//int main()
//{
//	string s1;
//	string s2;
//	
//	cin>>s1>>s2;
//	
//	cout<<check_rotation(s1,s2);
//}
