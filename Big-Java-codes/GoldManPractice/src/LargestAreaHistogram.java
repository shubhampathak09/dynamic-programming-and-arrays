

import java.util.Stack;

public class LargestAreaHistogram {

	
	public static void main (String[] args)
	{
		
		
		int[] height= {6,2,5,4,5,1,6};
		
		int n=height.length;
		
		
		Stack<Integer>st=new Stack<>();
		
		int left[]=new int[n];
		
		int right[]=new int[n];
		
		left[0]=0;
		
		right[n-1]=n-1;
		
		
		for(int i=1;i<n;i++)
		{
			
			int curr=height[i];
			
			while(st.size()>0&&curr<height[st.peek()])
			{
				st.pop();
			}
			if(st.isEmpty()==true)
			{
				left[i]=0;
				st.push(i);
			}
			else
			{
				left[i]=st.peek();
				st.push(i);
			}
		}
		 
		while(!st.isEmpty())
		{
			st.pop();
		}
		
		st.push(n-1);
		
		
		for(int i=n-2;i>=0;i--)
		{
			
			int curr=height[i];
			
			while(st.size()>0&&curr<height[st.peek()])
			{
				st.pop();
			}
			if(st.isEmpty())
			{
			right[i]=n-1;
			st.push(i);
			}
			else
			{
				right[i]=st.peek();
				st.push(i);
			}
		}
		
		
		int ans=Integer.MIN_VALUE;
		
		for(int i=0;i<n;i++)
		{
			
			ans=Math.max(ans, (right[i]-left[i]-1)*height[i]);
			
		}
		
		
		System.out.println(ans);
	}
	
	
	
}
