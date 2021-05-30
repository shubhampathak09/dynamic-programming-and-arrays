
public class PermutationandCombination {
	
	 // combinations
	
	public static int count=0;
	
	// 2^n
	
	// print the allways in which some identical item r can placed in n boxed, ie can place 0, 1 .. r item print theri result
	
	public static void combination(int cb,int tb,int ssf,int ts,String ans)
	{
		 
		
		if(cb>tb)
		{
			count=count+1;
			System.out.println(ans);
			return;
		}
		
		combination(cb+1,tb,ssf,ts,ans+"-");
		combination(cb+1,tb,ssf+1,ts,ans+"i");
		
		
	}
	
	public static void main(String args[])
	{
		
		int cb=1;
		int tb=4;
		
		int ssf=0;
		
		int ts=4;
		
		String ans="";
		combination(cb,tb,ssf,ts,ans);
		
		System.out.println(count);
		
	}

	
	// printing all combinations
	
}
