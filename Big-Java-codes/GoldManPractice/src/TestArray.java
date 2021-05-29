import java.util.ArrayList;
import java.util.Arrays;

public class TestArray {
	
	
	public static int[] solve(ArrayList<Integer>ar)
	{
		
		int[] ob=new int[ar.size()];
		
		int index=0;
		
		for(Integer i:ar)
		{
		
			ob[index]=i;
			index++;
			
		}
			
		
		//int [] a=new int[ar.size()];
		
		return ob;
	}
	
	public static void main(String[] args)
	{
		
		ArrayList<Integer>a1=new ArrayList<Integer>();
		a1.add(1);
		a1.add(2);
		a1.add(3);
		
//		Object[] arr=a1.toArray();
//		for(Object x:arr)
//		{
//			System.out.println(x);
//		}
//		
//		System.out.println("...");
		
		int[] res=new int[a1.size()];
		
		res=solve(a1);
		
		
		for(int i=0;i<res.length;i++)
		{
			System.out.println(res[i]);
		}
		
	}

}
