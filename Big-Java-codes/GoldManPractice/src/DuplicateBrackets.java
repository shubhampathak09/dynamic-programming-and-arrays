 
import java.util.Scanner;
import java.util.Stack;

public class DuplicateBrackets {
	
	
	
	public static void main(String[] args)
	{
		
		Stack<Character>stk=new Stack<>();
		
		Scanner s=new Scanner(System.in);
		
		String str=s.nextLine();
		
		for(int i=0;i<str.length();i++)
		{
			char ch=str.charAt(i);
			
			if(ch==')')
			{
				if(stk.peek()=='(')
				{
					// duplicacy
					System.out.println("unbalanced");
					System.out.println(true);
					return;
				}
				
				while(stk.peek()!='(')
				{
					stk.pop();
				}
				
				stk.pop();
			}
			else
			{
			stk.push(ch);	
			} 
		}
		
		System.out.println(false);
		System.out.println("Balanced");
	}

}
