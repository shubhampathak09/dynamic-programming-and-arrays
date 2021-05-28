import java.util.Arrays;
import java.util.*;
public class CommonElements {
	
	
	public static void solve()
	{
		
		int []a1= {1,1,2,2,2,5};
		int []a2= {1,1,1,2,2,5};
		
		int n=a1.length;
		int m=a2.length;
		
	//	Arrays.sort(a1);
	//	Arrays.sort(a2);
		
		// print the common elements
		
		//HashSet<Integer>hp=new HashSet<Integer>();
		
		HashMap<Integer,Integer>hmap=new HashMap<>();
		
		for(int i=0;i<n;i++)
		{
			if(hmap.containsKey(a1[i]))
			{
			int of=hmap.get(a1[i]);
			int nf=of+1;
			hmap.put(a1[i], nf);
			}
			hmap.put(a1[i], 1);
		}
		
		HashSet<Integer>hs=new HashSet<Integer>();
		
		for(int i=0;i<m;i++)
		{
			
		   if(hmap.containsKey(a2[i]))
		   {
			   // common elemet
			   hs.add(a2[i]);
		   }
		}
		
		for(int i:hs)
		{
			System.out.println(i);
		}
	}

	
	public static void main(String args[])
	{
		
		solve();
		
	}

}
