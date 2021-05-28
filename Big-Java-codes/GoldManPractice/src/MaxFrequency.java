
import java.util.*;

public class MaxFrequency {

	
	public static void main(String args[])
	{
		
		
		
		int[] a= {1,3,3,4,1,5,5,6,1,2,3,4,5,6,7,3,2,1};
		
		int n=a.length;
		
		HashMap<Integer,Integer>hmap=new HashMap<Integer,Integer>();   // element ->frequency
		
		int mxf=0;
		int val=0;
		
		for(int i=0;i<n;i++)
		{
			if(hmap.containsKey(a[i]))
			{
				
				int of=hmap.get(a[i]);
				int nf=of+1;
				hmap.put(a[i], nf);
			//	hmap.put(a[i], hmap.get(a[i])+1);
				
			}else
			{
				hmap.put(a[i], 1);
			}
			
			if(hmap.get(a[i])>mxf)
			{
				mxf=hmap.get(a[i]);
				val=a[i];  // this is value with mx frequency
			}
			
		}
		
		
		
		System.out.println("value with max freqeunct is "+val+" "+ "and its frequency is.."+mxf);
		
		// key set is used to iterate over map
		// set<Integer>
		
		System.out.println(hmap.keySet());
		
		for(Integer i:hmap.keySet())
		{
			System.out.println(i+"->"+hmap.get(i));
		}
		
	//	System.out.println(mxf);
	}
	
}
