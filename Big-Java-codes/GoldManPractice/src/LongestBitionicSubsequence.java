
public class LongestBitionicSubsequence {

	
	public static int lbs(int[] a)
	{
		// left to right find lis
		// right to left find lds
		// then we will find lbs
		//
		int n=a.length;
		
		int[] lis=new int[n];
		int[] lds=new int[n];
		
		for(int i=0;i<n;i++)
		{
			
			int mx=0;
			
			for(int j=0;j<i;j++)
			{
				if(a[j]<=a[i])
				{
					mx=Math.max(mx, lis[j]);
				}
			}
			lis[i]=mx+1;
		}
		
		for(int i=n-1;i>=0;i--)
		{
			
			int mx=0;
			
			for(int j=n-1;j>i;j--)   // j>i
			{
				if(a[j]<=a[i]) {
					mx=Math.max(mx, lds[j]);
				}
			}
			lds[i]=mx+1;
		}
		
		
		int ans=Integer.MIN_VALUE;
		
		for(int i=0;i<n;i++)
		{
			
		ans=Math.max(ans, lds[i]+lis[i]-1);	
			
			
		}
		
		
		return ans;
		
	}
	
	public static void main(String[] args)
	{
		
		//Input arr[] = {1, 11, 2, 10, 4, 5, 2, 1};
		int[] input= {12,11,40,5,3,1};
		
	//	int n=input.length;
		
		int result=lbs(input);
		
		
		System.out.println(result);
		
		
	}
	
	
	
}
