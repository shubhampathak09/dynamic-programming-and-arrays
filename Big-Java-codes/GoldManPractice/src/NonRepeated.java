import java.util.HashMap;

public class NonRepeated {
	 
	
	public static void main(String[] args)
	{
		
		String s="geeksforgeeks";
		
		int n=s.length();
		
		HashMap<Character,Integer>hm=new HashMap<>();
		
		 for(int i=0;i<n;i++)
		 {
			 char ch=s.charAt(i);
			 if(hm.containsKey(ch))
			 {
				 hm.put(ch, hm.get(ch)+1);
			 }
			 else
			 {
				 hm.put(ch, 1);
			 }
		 }
		  
		for(int i=0;i<s.length();i++)
		{
			if(hm.get(s.charAt(i))==1)
			{
				System.out.println(s.charAt(i));
				return;
			}
		}
		
		
	 
	}

}
