// boggle solution using flood fill algorithm

#include<bits/stdc++.h>
using namespace std;

char boogle[3][3]={{'G','I','Z'},{'U','E','K'},{'Q','S','E'}};
//
//int dx[]={1,1,0,-1,-1,-1,0,1};   // this thing here is bull shit ate my 2 hr
//int dy[]={-1,1,1,0,-1,-1,-1,0};


int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 

vector<string>input={"GEEKS","FOR","QUIZ","GO"};

bool ispresent(string &str,vector<string>input)
{
	
	for(auto x:input)
	{
	 if(str==x)
	 return true;
	}
	return false;
}

void _find(char boogle[3][3],int i,int j,string &str,bool visited[3][3],vector<string>input)
{
//	
//	if(i==3&&j==3)
//	{
//		return;
//	} // something that will newvwr happen
    //cout<<1;
	visited[i][j]=1;
	str.push_back(boogle[i][j]);
//	cout<<str<<" "<<ispresent(str,input)<<endl;
	if(ispresent(str,input))
	{ 
//	    cout<<"1";
		cout<<str<<endl;
	}
	
	
	for(int k=0;k<8;k++)
	{
		int newx=i+dx[k];
		int newy=j+dy[k];
		
		if(newx>=0&&newx<3&&newy>=0&&newy<3&&visited[newx][newy]==false)
		{
			_find(boogle,newx,newy,str,visited,input);
		}
	}
	visited[i][j]=false;
	str.pop_back();
}

int main()
{
	

	
	bool visited[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		visited[i][j]=0;
	}
	
	string str="";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		_find(boogle,i,j,str,visited,input);
	}
  
//  cout<<ispresent("GEEKS",input); 	
}
