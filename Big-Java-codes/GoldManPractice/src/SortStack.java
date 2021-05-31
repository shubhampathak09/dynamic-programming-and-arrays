import java.util.Stack;

public class SortStack {

	
	public static void insert(Stack<Integer>st,int x)
	{
		
		if(st.size()==0||x>=st.peek())
		{
			st.push(x);
		}
		int tem=st.pop();
		//st.pop();
		insert(st,x);
		st.push(tem);
	}
	
	public static void sortStack(Stack<Integer>st)
	{
		
		if(st.size()==1)
			return;
		
		int temp=st.pop();
		//st.pop();
		sortStack(st);
		insert(st,temp);
		
		return;
		
	}
	
	public static void main(String[] args)
	{
		
		Stack<Integer>st=new Stack<>();
		
		st.push(5);
		st.push(1);
		st.push(0);
		st.push(7);
		st.push(2);
		st.push(6);
		
		System.out.println(st);
		
		
		
		sortStack(st);
		
		
		System.out.println(st);
		
		
	}
}
