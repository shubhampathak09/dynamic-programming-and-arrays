
import java.util.Stack;

public class StockSpan {

	
	
	public static void main(String[] args)
	{
		
		
		int[] prices= {100,80,60,70,60,75,85};
		
		int n=prices.length;
		
		Stack<Integer>st=new Stack<>();
		
		st.push(0);
		
		int[] ans=new int[n];
		
		ans[0]=1;
		
		
		for(int i=1;i<n;i++)
		{
			
			
			int curr=prices[i];
			
			while(st.size()>0&&curr>prices[st.peek()])
			{
				
				st.pop();
				
			}
			
			if(st.isEmpty()==true)
			{
				ans[i]=i+1;
				st.push(i);
			}
			else
			{
				ans[i]=i-(st.peek());
				st.push(i);
			}
		}
		
		
		for(int i:ans)
		{
			System.out.println(i);
		}
	}
}
