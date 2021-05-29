
public class PrintN {

	
	
	public static void printN1(int n)
	{
		
		if(n==1)
		{
			System.out.println(n);
			return;
		}
		System.out.println(n);
		printN1(n-1);
	}
	
	public static void printN(int n,int count)
	{
		
		
		if(count==n)
		{
			System.out.println(count);
			return;
		}
		int k=count;
		System.out.println(k);
		printN(n,k+1);
		
	    
		return;
	}
	
	public static void main(String[] args)
	{
		
		printN(10,1);
		
		System.out.println();
		printN1(10)
;	}
	
}
