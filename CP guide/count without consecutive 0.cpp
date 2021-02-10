//#include<bits/stdc++.h>
//using namespace std;
//
//int ct;
//
//void count_bin(string inp,int pos,char bv,int k)
//{
//	
//	if(inp.size()==0)
//	{
//		ct++;
//		return;
//	}
//	if(bv=='1')
//	{
//	
//	string with1=inp+string(1,bv);
//	count_bin(with1,pos+1,'1',k);
//	count_bin(with1,pos+1,'0',k);
//}
//
//
//if(bv=='0')
//{
//	string with0=inp+string(1,bv);
//	count_bin(with0,pos+1,'1',k);
//}
//
//}
//
//int main()
//{
//	string inp1="";
//	
//	count_bin(inp1,0,'1',3);
//	count_bin(inp1,0,'0',3);
//	
//	cout<<ct;
//}
