import java.util.Stack;

public class NextGreaterElementRight {

	
	
	public static void main(String[] args)
	{
		
		
		int[] a=  {13,7,6,12};
		
		int n=a.length;
		
		
		int[] ans=new int [n];
		
		
		Stack<Integer>st=new Stack<Integer>();
		ans[n-1]=-1;
		st.push(a[n-1]);
		
		for(int i=n-2;i>=0;i--)
		{
			
			int curr=a[i];
			
			while(st.size()>0&&curr>st.peek())  // think if stakv is empty
			{
				st.pop();
			}
			if(st.isEmpty()==true)
			{
				ans[i]=-1;
				st.push(curr);
			}
			else
			{
				ans[i]=st.peek();
				st.push(curr);
			}
			
		}
		
		
		for(int i=0;i<n;i++)
		{
			System.out.print(ans[i]+" ");
		}
	}
}
