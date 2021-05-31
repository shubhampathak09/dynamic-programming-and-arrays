
public class LinkedList {
	
	
	public int val;
	
	public LinkedList next;
	
	LinkedList(int val)
	{
		this.val=val;
		this.next=null;
		
	}
	
	public static void main(String args[])
	{
		
		LinkedList head=new LinkedList(4);
		
		head.next=new LinkedList(3);
		
		head.next.next=new LinkedList(4);
		
		head.next.next.next=new LinkedList(5);
		
		
		
		while(head!=null)
		{
			
			System.out.print(head.val+" ");
			head=head.next;
		}
	}
}
