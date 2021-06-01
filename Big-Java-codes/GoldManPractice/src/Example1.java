import java.util.PriorityQueue;

public class Example1 {
	
	
	
	static class Student implements Comparable<Student>
	{
		
		int rno;
		int ht;
		int wt;
		
		Student(int rno,int ht,int wt)
		{
			this.rno=rno;
			this.ht=ht;
			this.wt=wt;
			
			
			// sort accorinding to roll,,or ht or wt ??
		}

		@Override
		public int compareTo(Student o) {
			// TODO Auto-generated method stub
			return this.rno-o.rno;
		}
		
		
		// to print an object we need to give toString
		
		public String toString()
		{
			return "rnp = "+this.rno +" height = "+this.ht+" weight = "+this.wt;
		}
		
	}
	
	public static void main(String args[]) {
		
		
		PriorityQueue<Student>pq=new PriorityQueue();
		
		
		pq.add(new Student(10,180,85));
		pq.add(new Student(2,185,80));
		pq.add(new Student(12,170,83));
		pq.add(new Student(18,179,84));
		pq.add(new Student(7,182,88));
		
		
		
		
		while(pq.size()!=0)
		{
			System.out.println(pq.peek());  // classclastexception
			pq.remove(); // great
		}
		
		
		
	}

}





// add -> upheapify compare parent and child data.get(par(i)<data.get(child(i);
//java->upheafuy and downheapify
// int that case objecyt u pass should implement comaparable interface??
// interface contract of function 
// complete compareTo
// int CompareTo(Studetn ob)
// this ob and parameter
//this.somethin-ob.something  1  0 and -1
//