
// careful with stringbuilder usage

public class PrintingSpecificCOmbinations {
	
	
	public static int count=0;
	
	
	public static void combination(int cb,int tb,int ssf,int tir,String ans)
	{
		if(cb>tb)
		{
			if(ssf==tir)
			{
				count++;
				System.out.println(ans);
				//return;
			}
			
		return;
		}
		//String ans="";
		combination(cb+1,tb,ssf,tir,ans + "-");
		combination(cb+1,tb,ssf+1,tir,ans + "i");
		
	}
	
	public static void main(String args[])
	{
		
		int cb=1;
		
		int tb=4;
		
		int tir=2;
		
		String ans="";
		
		combination(cb,tb,0,tir,ans);
		
		System.out.println(count);
	}

}
