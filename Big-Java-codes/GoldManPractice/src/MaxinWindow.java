import java.util.Stack;

public class MaxinWindow {
	
	
	public static void main(String args[])
	{
		
		
		int[] arr= {1,2,3,1,4,5,2,3,6};
		
		int k=4;
		
		int[] ans=new int[arr.length];
		
		int n=ans.length;
		
		Stack<Integer>st=new Stack<>();
		
		
		st.push(n-1);
		
		ans[n-1]=n;
		
		for(int i=n-2;i>=0;i--)
		{
			
			int curr=arr[i];
			
			
			while(st.size()>0&&curr>arr[st.peek()])
			{
				st.pop();
			}
			
			if(st.empty())
			{
				ans[i]=n;
				st.push(i);
			}
			else
			{
				ans[i]=st.peek();
				st.push(i);
			}
		}
		
		for(int i=0;i<n;i++)
		{
			System.out.print(ans[i]+" ");
		}
		
		// cool
		
	//	int k=4;
		
		System.out.println();
		
		for(int i=0;i<=n-k;i++)
		{
			
			int j=i;
			
			while(ans[j]<i+k)
			{
				j=ans[j];
			}
		//	while(ans[j]<)
			System.out.print(arr[j]+" ");
		}
		
	}

}
