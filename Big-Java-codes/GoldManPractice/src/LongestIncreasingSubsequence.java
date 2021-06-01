
public class LongestIncreasingSubsequence {

	
	public static int lis(int[] a)
	{
		
		// int i ->stack
		// Integer i=20  heap
		
		int max_lis=0;
		
		int n=a.length;
		
		int[] dp=new int[n];
		
		for(int i=0;i<n;i++)
		{
			
			int mx=0;
			
			for(int j=0;j<i;j++)
			{
				
				if(a[i]>a[j])
				{
					mx=Integer.max(mx, dp[j]);
				}
			}
			
			dp[i]=mx+1;
			if(dp[i]>max_lis)
			{
				max_lis=dp[i];
			}
		}
		
		
		
		
		return max_lis;
		
	}
	
	
	public static void main(String args[])
	{
		
		int[] a= {10,22,9,33,21,50,41,60,80,1};
		
		
		
		int ans=lis(a);
		
		
		System.out.println(ans);
		
	}
	
}
