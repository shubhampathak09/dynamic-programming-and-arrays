public class Ex_11 {

    static int count=0;  // this is the use of static to increment count of records automatically
    

    Ex_11()
    {
        count++;
        System.out.println(count);
    }

    public static void main(String[] args)
    {


        Ex_11 ob1=new Ex_11();

        Ex_11 ob2=new Ex_11();

        Ex_11 ob3=new Ex_11();




    }
}
