import java.util.Scanner;

import java.util.*;

public class CommonElementsTwo {
	
	
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		
		
		int n1=sc.nextInt();
		
		int n2=sc.nextInt();
		
		int[] a1=new int[n1];
		
		int[] a2=new int[n2];
		
		for(int i=0;i<n1;i++)
		{
		a1[i]=sc.nextInt();
		}
		
		for(int i=0;i<n2;i++)
		{
		a2[i]=sc.nextInt();
			
		}
		
		
		
		HashMap<Integer,Integer>hm=new HashMap<>();
		
		for(int i=0;i<n1;i++)
		{
			if(hm.containsKey(a1[i]))
			{
				int of=hm.get(a1[i]);
				int nf=of+1;
				hm.put(a1[i], nf);
			}
			else
			{
				hm.put(a1[i], 1);
			}
		}
		
		
		for(int i=0;i<n2;i++)
		{
			if(hm.containsKey(a2[i])&&hm.get(a2[i])>0)
			{
			System.out.print(a2[i]+" ");
			int of=hm.get(a2[i]);
			int nf=of-1;
			hm.put(a2[i], nf);
			}
		}
	}

}
