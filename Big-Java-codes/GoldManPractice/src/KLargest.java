

import java.util.Collections;
import java.util.PriorityQueue;

public class KLargest {

	
	public static void main(String[] args)
	{
		
		
		PriorityQueue<Integer>pq=new PriorityQueue<Integer>();
		
		int k=3;
		
		int [] a= {3,4,1,5,6,7,8,8};
		
		
		for(int i=0;i<a.length;i++)
		{
			pq.add(a[i]);
			
			if(pq.size()>k)
			{
				//if(a[i]>pq.peek())
					pq.remove();
			}
		}
		
		
		while(!pq.isEmpty())
		{
			System.out.println(pq.peek());
			pq.remove();
		}
	}
	
}
