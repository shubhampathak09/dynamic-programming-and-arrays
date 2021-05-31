
public class QuickSort {
	
	
	
	public static int partition(int[] a,int low,int high)
	{
		int i=low-1;
		int pivot=a[high];
		
		for(int j=low;j<=high-1;j++)
		{
			if(a[j]<pivot)
			{
				i++;
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		
		int temp=a[i+1];
		a[i+1]=a[high];
		a[pivot]=temp;
		
		return i+1;
	}
	
	
	public  static void quicksort(int[] a,int  low,int high)
	{
		
		if(low<high)
		{
			
			int pi=partition(a,low,high);
			quicksort(a,low,pi-1);
			quicksort(a,pi+1,high);
			
		}
		
	}
	
	public static void main(String[] args)
	{
		
		
		int[] a= {3,4,1,5,6,7,2,3,4,5};
		
		int n=a.length;
		
		
		quicksort(a,0,n-1);
		
		for(int x:a)
		{
			System.out.print(x+" ");
		}
		//System.out.println(a);
	}
	
	// swap a[i+1] with a[high] to fit it current posotion
	

}
