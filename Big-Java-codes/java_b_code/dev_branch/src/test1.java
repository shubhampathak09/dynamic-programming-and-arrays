import java.util.Scanner;

public class test1 {

    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);

        String name="";

        while(name.isEmpty())
        {
         System.out.println("Enter Your name");
         name=s.nextLine();
        }
        System.out.println("Hello "+name);

    }
}
