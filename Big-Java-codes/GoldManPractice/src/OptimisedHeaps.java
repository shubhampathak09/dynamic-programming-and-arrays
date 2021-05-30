
import java.util.*;

public class OptimisedHeaps {


	
 public static class PriorityQueue
 {
	 ArrayList<Integer>data;
	 
	 public void heapify(int i)
	 {
		 
		 int largest=i;
		 int left=2*i+1;
		 int right=2*i+2;
		 
		 if(left<data.size()&&data.get(largest)<data.get(left))
		 {
			int temp=data.get(largest);
			
			data.add(largest, data.get(left));
			data.add(left,temp);
		 }
		 if(right<data.size()&&data.get(largest)<data.get(right))
		 {
			int temp=data.get(largest);
			
			data.add(largest, data.get(right));
			data.add(right,temp);
			
			
			
		 }
		 
		 if(largest!=i)
		 {
			 int temp=data.get(largest);
				
				data.add(largest, data.get(i));
				data.add(i,temp);
			 
			 heapify(largest);
		 }
	 }
	 
	 public PriorityQueue(int[] arr)
	 {
		 
		 data=new ArrayList<>();
		 
		 for(int val:arr)
		 {
			 data.add(val);
			
		 }
		 
		 for(int i=data.size()/2;i>=0;i--)
		 {
			 
			 heapify(i);
			 
		 }
		 
	 }

		
public int peek()
{
	
	return data.get(0);
	
}

public void add(int val)
{
	
	data.add(val);
	//int index=data.la
	heapify(data.size()-1);
}
	 
 }
	

 
 public static void main(String[] args)
 {
	
	 int[] a= {3,1,2,4,5,8,9,0};
	 
	 PriorityQueue pq=new PriorityQueue(a);
	 
	
	 
	 System.out.println(pq.peek());
	 
	 
 }
 
}
