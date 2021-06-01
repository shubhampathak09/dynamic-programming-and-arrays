
import java.util.*;

public class ReverseArray {
	
	
	public static void insertbeg(ArrayList<Integer>arr,int x)
	{
		
		
		if(arr.size()==0)
		{
			arr.add(x);
			return;  // if u miss this then stack overflow will happen
			
		}
		
		int n=arr.size();
		
		int temp=arr.get(n-1);
		arr.remove(n-1);
		insertbeg(arr,x);
		arr.add(temp);
		
	}
	
	public static void reverse(ArrayList<Integer>arr)
	{
		
		if(arr.size()==1)
		{
			return;
		}
		
		int temp=arr.remove(arr.size()-1);
		
		reverse(arr);
		insertbeg(arr,temp);
		
		
		
	}
	
	public static void main(String[] args)
	{
		
	
	ArrayList<Integer>arr=new ArrayList<>();
	
	arr.add(1);
	arr.add(5);
	arr.add(7);
	arr.add(9);
	arr.add(10);
	
	System.out.println(arr);
	
	
	reverse(arr);
	
	System.out.println(arr);
	
	
		
	}

}
