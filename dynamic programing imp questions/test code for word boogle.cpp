// 

dfs(string str,char grid[n][m],bool visited[n][m],int i,int j)
{
	
	
	visited[i][j]=true;
	
	str.push_back(grid[i][j]);
	
	if(findword(str))
	{
		
		//cout<<str;
		words.insert(str);
	}
	
	for(int k=0;k<8;k++)
	{
		
		int newi=i+dx[k];
		int newj=j+dy[k];
		if(newi>=0&&newi<n&&newj>=0&&newj<m&&visited[newi][newj]==0)
		{
			dfs(str,grid,visited,newi,newj);
		}
	}
	visited[i][j]=0;
	str.pop_back();
}

// cool ez code

