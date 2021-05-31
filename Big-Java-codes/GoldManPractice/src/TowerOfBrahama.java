
public class TowerOfBrahama {
	
	public static int count=0;
	
	static void solve(int n,int s,int d,int h)
	{
		count++;
		if(n==1)
		{
		System.out.println("moving the disk "+n+" from "+s+" to "+d);
			return;
		}
		
		solve(n-1,s,h,d);
		System.out.println("moving the disk "+n+" from "+s+" to "+d);
		solve(n-1,h,d,s);
		
	}
	
	public static void main(String[] args)
	{
		int n=4;
		solve(n,1,2,3);
		
		System.out.println(count);
	}

}
