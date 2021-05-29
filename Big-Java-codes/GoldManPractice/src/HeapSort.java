
public class HeapSort {
	
	
//public static void swap(int a,int b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//	return;
//}
//	wee are in java//:p
public static void heapify(int a[],int n,int i)  // i root index
	{
		
		int largest=i;
		
		int left=2*i+1;
		
		int right=2*i+2;
		
		if(left<n&&a[largest]<a[left])
		{
			largest=left;
		}
		if(right<n&&a[largest]<a[right])
		{
			largest=right;
		}
		if(largest!=i)
		{
		
		//swap(a[largest],a[i]);   we are in java fucking ggg
			
			int temp=a[largest];
			a[largest]=a[i];
			a[i]=temp;
		    
			heapify(a,n,largest);
		}
		
	}
	
    public static void heapSort(int a[],int n)
    {
    	
    	
    	for(int k=n/2-1;k>=0;k--)
    		heapify(a,n,k);
    	
    	for(int i=n-1;i>=0;i--)
    	{
    		int temp=a[i];
    		a[i]=a[0];
    		a[0]=temp;
    		heapify(a,i,0);
    	}
    	
    }
  
	public static void main(String[] args)
	{
		
		//int a=3;
	//	int b=4;
		
		//swap(a,b);
		
	//	System.out.println(a);
		//System.out.println(b);
		
		//System.out.println("Hi");
		
		
		int a[]= {3,4,1,5,6,7,1,2};
		
		int n=a.length;
		
		heapSort(a,n);
		
		
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+" ");
		}
	}

}
