import java.util.Scanner;
import java.util.Stack;

public class BalancedBrackets {
	
	
	public static void main(String[] args)
	{
		
		Stack<Character>st=new Stack<>();
		
		Scanner sc=new Scanner(System.in);
		
		String s=sc.nextLine();
		
		
		// without expressions
		
		char xtop;
		
		for(int i=0;i<s.length();i++)
		{
			
			if(s.charAt(i)=='('||s.charAt(i)=='{'||s.charAt(i)=='[')
			{
				
				st.push(s.charAt(i));
				continue;
			}
			else
			{
				if(s.isEmpty())
				{
	
					System.out.println("Not a valid Balanced Paranthesis");
					return;
				}
				
				
				switch(s.charAt(i))
				{
				case ')':
				xtop=st.peek();
				st.pop();
				if(xtop=='['||xtop=='{')
				{
					System.out.println("Unbalanced");
					return;
				}
				break;
				
				
				case ']':
				xtop=st.peek();
				st.pop();
				if(xtop=='('||xtop=='{')
				{
					System.out.println("Unbalanced");
					return;
				}
				break;
				
				case '}':
					xtop=st.peek();
					st.pop();
				    if(xtop=='('||xtop=='[')
				    {
				    	System.out.println("Unbalanced");
				    	return;
				    }
				    break;
				}
			}
			
		}
		if(st.isEmpty()==true)
		{
		System.out.println("Balanced");
		return;
		}
		else
		{
			System.out.println("Unbalanced");
			return;
		}
	}

}
