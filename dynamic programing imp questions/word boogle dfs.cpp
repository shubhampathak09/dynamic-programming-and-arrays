#include<bits/stdc++.h>
using namespace std;


int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};


set<string>words;

bool isword(string str,vector<string>dict)
{
	
	for(auto x:dict)
	{
		if(str==x)
		return true;
	}
	return false;
	
}

void findwords(vector<string>dict,vector<vector<char>>boogle,vector<vector<int>>visited,int i,int j,string str,int n,int m)
{
	
	
	visited[i][j]=1;
	//cout<<boogle[i][j]<<" ";
	str.push_back(boogle[i][j]);
	
	if(isword(str,dict))
	{
		words.insert(str);
	//	cout<<str;
	//	cout<<endl;
		
	}
	
	
	for(int k=0;k<8;k++)
	{
		int newi=i+dx[k];
		int newj=j+dy[k];
		
		if(newi>=0&&newi<n&&newj>=0&&newj<m&&visited[newi][newj]==0)
		{
			findwords(dict,boogle,visited,newi,newj,str,n,m);
		}
	}
	str.pop_back();
	visited[i][j]=0;
}

int main()
{
	
	
	vector<string> dict={"GEEKS","FOR","QUIZ","GO"};
	
	vector<vector<char>>boogle={{'G','I','Z'},{'U','E','K'},{'Q','S','E'}};
	
	int n=boogle.size();
	int m=boogle[0].size();
    
	vector<vector<int>>visited(n,vector<int>(m));
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			visited[i][j]=0;
		}
	}

   string str="";
   
//   for(auto x:dict)
//   {
//   	cout<<x<<endl;
//   }
   
//   cout<<"hi";
   
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{   
    	    //cout<<"here";
    		findwords(dict,boogle,visited,i,j,str,n,m);
		}
	}
	 	
//	cout<<n<<m;
	
	
	for(auto x:words)
	{
		cout<<x<<endl;
	}
	
}


// word boogle using dfs
// using trie we can optimise

