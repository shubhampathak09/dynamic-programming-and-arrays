public class Ex_3 {

    // finally

    // gets executed weathef there is exception or nit


    public static void main(String args[])
    {

        try
        {
           int a=100;
         //  int b=2;
            int b=0;
           int c=a/b;
           System.out.println(c);
        }
      /*  catch(Exception e) {

            System.out.println(e);

        } */

        finally {


            System.out.println("I am in finally");

            // pogram get terminated abnormally


           // finally gets executed even when no exception
        }

    }


}
