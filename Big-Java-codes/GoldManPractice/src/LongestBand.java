
import java.util.*;

public class LongestBand {
	
	
	public static void main(String[] args)
	{
		
		
		int[] nums= {100,4,200,1,3,2};
		
		int n=nums.length;
		
		HashSet<Integer>hs=new HashSet<Integer>();
		
		int maxl=Integer.MIN_VALUE;
		
		for(int i:nums)
		{
			hs.add(i);
		}
		
		for(int i=0;i<n;i++)
		{
			
			int curr=nums[i];
			
			if(hs.contains(curr-1)==false)
			{
				int cl=1;
				int next=curr+1;
				while(hs.contains(next))
				{
					cl++;
					next=next+1;
				}
				maxl=Math.max(maxl, cl);
			}
		}
		System.out.print("max band length is..");
		System.out.println(maxl);
	}
	

}
