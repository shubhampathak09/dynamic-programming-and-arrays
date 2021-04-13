class BinarySearch
{

int binarySearch(int a[],int l,int r,int x)
{

while(l<=r)
{
    int mid=(l+r)/2;

    if(a[mid]==x)
    {
        return mid;
    }
    else if(a[mid]<x)
    {
        l=mid+1;
    }
    else
    r=mid-1;
}

return -1;

}

public static vodi main(String[] args)
{
    BinarySearch ob=new BinarySearch();

    int a[]={2,3,4,10,40};

    int n=a.length-1;

    int result=ob.binarySearch(a,0,n);


    System.out.println(result);

}

}