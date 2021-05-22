public class Ex_9 extends RuntimeException {

   Ex_9(String msg)
   {
       super(msg); // msg is available to default exception handler ->msg that is why super


   }








    // checked and unchecked
    // unchecked is better
    // class test extends exception ->checked exception
    // class test extends exception->runtime exception
    // creating unchecked exception

}

class voting
{

    public static void main(String[] args)
    {
       int age=16;


       try {
           if (age < 18) {
               // class name description and stack trace
               throw new Ex_9("Age is less than 18");
           } else {
               System.out.println("vote sucess");
           }
       }catch(Ex_9 e)
       {
           e.printStackTrace();
       }
   // this is how user defined exceptions work with help of throw keywords
   // maually object is created
   // abnormal termination still
   // use try catch again to normal exetue the program

        System.out.println("Hello");

    }
}
