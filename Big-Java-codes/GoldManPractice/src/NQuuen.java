
public class NQuuen {
	
	public static int N=4;
	
	
	public static void printsol(int board[][])
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				System.out.print(board[i][j]);
			}
			System.out.println();
		}
		
	}
	
	public static boolean issafe(int row,int col,int board[][])
	{
		
		int i,j;
		
		for(i=0;i<col;i++)
			if(board[row][i]==1)
				return false;
		
		for(i=row,j=col;i>=0&&j>=0;i--,j--)
		{
			if(board[i][j]==1)
				return false;
		}
		
		for(i=row,j=col;i<N&&j>=0;i++,j--)
			if(board[i][j]==1)
				return false;
		
		return true;
	}
	
	public static boolean solveNQueen(int board[][],int col)
	{
		if(col>=N)
		{
			
			printsol(board);
			
			return true;
		}
		
		for(int i=0;i<N;i++)
		{
		if(issafe(i,col,board))
		{
			board[i][col]=1;
			if(solveNQueen(board,col+1)==true)
			{
				return true;
			}
			board[i][col]=0;
		}
		}
		
		return false;
	}
	public static void main(String[] args)
	{
		
		
		int[][] board=new int[N][N];
		
		
		solveNQueen(board,0);
		
	}

}
