package TwoSum;

import java.util.*;

public class TwoSum {
	
	// @SuppressWarnings("serial")
	public static int[] twoSum(int[] nums,int targetSum)
	 { 
		HashMap<Integer,Integer>hm=new HashMap<>();
		
		//ArrayList<Integer>result=new ArrayList<>();
		
		 for(int i=0;i<nums.length;i++)
		 {
			 
			 int reqsum=targetSum-nums[i];
			 
			 if(hm.containsKey(reqsum))
			 {
			//	 result.add(nums[i],reqsum);
				// break;
				 
				 return new int[] {i,hm.get(reqsum)};
			 }
			 
			 hm.put(nums[i], i);
			 //hm.put(nums[i], i);
			 
		 }
		 
		 return new int[] {};
	 }
	
	public static void main(String args[])
	{
		
		int[] nums= {2,7,11,15};
		
		int target=9;
		
	//	ArrayList<Integer>ans=new ArrayList<Integer>();
	 int[] result=twoSum(nums,target);
	 
	 for(int i=0;i<result.length;i++)
	 {
		 System.out.println(result[i]);
	 }
	 
	// System.out.println(result.length);
	 
	}

}
