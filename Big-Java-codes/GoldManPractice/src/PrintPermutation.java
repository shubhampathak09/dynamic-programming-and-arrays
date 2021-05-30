
public class PrintPermutation {
	
	public static int count=0;
	
	public static void printP(int[]boxes,int tb,int cb )
	{
		
		if(cb>tb)
		{
			count++;
			for(int i=0;i<boxes.length;i++)
			{
				System.out.print(boxes[i]);
			}
			System.out.println();
			
			return;
			
		}
		
		for(int i=0;i<boxes.length;i++)
		{
			if(boxes[i]==0)
			{
				boxes[i]=cb;
				printP(boxes,tb,cb+1);
				boxes[i]=0;
			}
		}
		
	}
	
	public static void main(String[] args)
	{
		
		int [] boxes=new int[4];
		
		
		
		printP(boxes,4,1);
		
		System.out.println(count);
		
	}

}
