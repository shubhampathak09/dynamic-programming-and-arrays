import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;


// imp concept

public class SortPair {
	
	
	 public static class Pair implements Comparable<Pair>{
		
		 
		 int x;
		 int y;
		 
		 Pair(int x,int y)
		 {
			 this.x=x;
			 this.y=y;
		 }
     
     
	 public int compareTo(Pair o)
	 {
		 
		 return this.x-o.x;
	 }
		 
     @Override
     public String toString()
     {
    	 
    	 return "x :- "+this.x+" y :- "+this.y;
     }
	 
	 
		 
	}
	 
	 
	 public static void main(String[] args)
	 {
		 ArrayList<Pair>ap=new ArrayList<>();
		 
		 
		 ap.add(new Pair(1,2));
		 ap.add(new Pair(3,4));
		 ap.add(new Pair(5,6));
		 
		 ap.sort(new Comparator<Pair>() {
			 
			 public int compare(Pair p1,Pair p2)
			{
				return p1.y-p2.y;
			}
		 });
		 
		 
		 System.out.print(ap);
		 
		 
		 Pair[] p=new Pair[5];
		 
		 p[0]=new Pair(1,2);
		 p[1]=new Pair(3,4);
		 p[2]=new Pair(5,6);
		 p[3]=new Pair(6,5);
		 p[4]=new Pair(-1,-1);
		 
		 
//		 Arrays.sort(p,new Comparator<Pair>{
//			 
//			 public int comapre(Pair p1,Pair p2)
//			 {
//				 return p1.x<p2.x;
//			 }
//		 });
		 
	 }

}
