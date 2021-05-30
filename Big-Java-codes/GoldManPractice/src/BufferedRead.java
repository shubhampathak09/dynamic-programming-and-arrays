  
import java.io.*;
  
public class BufferedRead {
	
	
	public static void main(String[] args) throws NumberFormatException, IOException
	{
		
		 BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
		 
		 
		 int x=Integer.parseInt(bf.readLine());
		 
		System.out.println(x);
	}

}
