import java.util.Scanner;


class chessboard
{

    public static void main(String[] args)
    {
     
     Scanner s=new Scanner(System.in);  // nextInt -integer // nextLine
     String ip=s.nextLine();
   // System.out.println(ip);
    
    char x=ip.charAt(0);
    char y=ip.charAt(1);
    
    if(x=='a'||x=='c'||x=='e'||x=='g')
    {
     if((y-'0')%2==0)
     {
         System.out.println("Black");
     } 
     else
     {
         System.out.println("White");
     }
    }
    else
    {
        if((y-'0')%2==0)
        {
            System.out.println("white");
        }
        else
        {
            System.out.println("Black");
        }
    } 

    }
}