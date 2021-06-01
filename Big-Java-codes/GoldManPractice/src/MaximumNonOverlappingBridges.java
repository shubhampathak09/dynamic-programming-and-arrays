import java.util.Arrays;
import java.util.Scanner;

public class MaximumNonOverlappingBridges {
	
	//[acdscdcds];
	
	
	public static class Bridge implements Comparable<Bridge>
	{
		
		
		int n;
		int s;
		
		Bridge(int n,int s)
		{
			this.n=n;
			this.s=s;
			}
		
		public int compareTo(Bridge o)
		{
			if(this.n!=o.n)  // considering the case whrn noth is equal
			return this.n-o.n;
			else
				return this.s-o.s;
		}
		
		@Override
		public String toString()
		{
			 return "N:->"+this.n+" S:->"+this.s;
		}
	}
	
	public static void main(String[] args)
	{
	
		
		Scanner s=new Scanner(System.in);
		
		int n=s.nextInt();
		
		Bridge[] bridges=new Bridge[n];
	//	Bridge[] bridges=new Bridge[n];
		
//
//		int n=s.nextInt();
//		
		s.nextLine();
//		
		//String line=s.nextLine();
//		
//		
//		System.out.println(l);
//		System.out.print(n);
		
		for(int i=0;i<n;i++)
		{
			 
			String line=s.nextLine();
			
			String[] parts=line.split(" ");
//			
			int north=Integer.parseInt(parts[0]);
			int south=Integer.parseInt(parts[1]);
//			
			bridges[i]=new Bridge(north,south);
		}
		
		
	 Arrays.sort(bridges);
	 
	 
	 System.out.println(bridges[0].n+" "+bridges[0].s);
		
	}
	
	// cool
	
	

}
