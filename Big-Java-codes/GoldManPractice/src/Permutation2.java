
public class Permutation2 {
	
	
	
	public static void combination(int[]boxes,int ci,int ti,int lb)
	{
		
		if(ci>ti)
		{
			
			for(int i=0;i<boxes.length;i++)
			{
				if(boxes[i]==1)
					System.out.print(i);
				else
					System.out.print("-");
			}
			System.out.println();
			return;
		}
		
		for(int b=lb+1;b<boxes.length;b++)
		{
			
			if(boxes[b]==0)
			{
				boxes[b]=1;
				combination(boxes,ci+1,ti,lb+1);
				boxes[b]=0;  // backtrack
			}
			
		}
		
	}
	
	public static void main(String[] args)
	{
		
		int n=4;
		
		int[] boxes=new int[n];
		
		int ti=3;
		
		
		
		int ci=1;
		
		combination(boxes,ci,ti,-1);
		
	}
 
}
