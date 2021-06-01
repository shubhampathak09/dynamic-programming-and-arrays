
public class MaxSumLongestIncreasingSubsequence {
	
	
	public static int maxLiss(int a[],int n)
	{
		
		
		int[] dp=new int[n];
		
		int ovmax=0;
		
		for(int i=0;i<n;i++)
		{
			
			
			int mxsum=0;
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j])
				{
					mxsum=Math.max(mxsum, dp[j]);
				}
				
			}
			dp[i]=mxsum+a[i];

			if(dp[i]>ovmax)
			{
				ovmax=dp[i];
			}  
			
			
		}
		
		return ovmax;
	}
	
	
	public static void main(String[] args)
	{
		
		
		int[] a= {1,101,2,3,100,4,5};
		
		
		int n=a.length;
		
		System.out.println(maxLiss(a,n));
		
	}

}
