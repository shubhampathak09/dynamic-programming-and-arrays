import java.util.ArrayList;

import java.util.*;

public class MergeKSorted {
	
	
	
	public static class Pair implements Comparable<Pair>{
		
		
		int li;
		int di;
		int value;
		
		Pair(int li,int di,int value)
		{
			this.li=li;
			this.di=di;
			this.value=value;
			
		}
		
		public int compareTo(Pair o)
		{
			return this.value-o.value;
		}
	}
	
	public static ArrayList<Integer> mergeKSortedLists(ArrayList<ArrayList<Integer>>list)
	{
		ArrayList<Integer>rv=new ArrayList<Integer>(); // rv will contain elemtnts in sorted order
		
		
		PriorityQueue<Pair>pq=new PriorityQueue<Pair>();
		
		for(int i=0;i<list.size();i++)
		{ 
			
			Pair p=new Pair(i,0,list.get(i).get(0));
			pq.add(p);
			
		}
		
		while(pq.size()>0)
		{
			Pair p=pq.remove();
			
		//	System.out.println(p.value);
			
			rv.add(p.value);
			
			
			
			p.di=p.di+1;
			
			if(p.di<list.get(p.li).size())
			{
				p.value=list.get(p.li).get(p.di);  // forggot to increase the value?
				pq.add(p);
			}
			 
		}
		
		return rv;
	}
	
	
	public static void main(String args[])
	{
		
		ArrayList<ArrayList<Integer>>inp=new ArrayList<ArrayList<Integer>>();
		
		inp.add(new ArrayList<Integer>(Arrays.asList(10,20,30,40)));
		
		inp.add(new ArrayList<Integer>(Arrays.asList(5,9,12,18,32)));
		
		inp.add(new ArrayList<Integer>(Arrays.asList(11,15,17)));
		
		//ArrayList<Integer>lis=new ArrayList<Integer>(Arrays.asList(1,2,3,4));
		
//		
//		
//		for(int i=0;i<inp.size();i++)
//		{
//			
//			for(int j=0;j<inp.get(i).size();j++)
//			{
//				System.out.println(inp.get(i).get(j));
//			}
//			System.out.println();
//		}
//		
//		
		ArrayList<Integer>result=new ArrayList<Integer>();
		
		result=mergeKSortedLists(inp);
		
		
		for(Integer i:result)
		{
			System.out.print(i+" ");
		}
		
	}

}
