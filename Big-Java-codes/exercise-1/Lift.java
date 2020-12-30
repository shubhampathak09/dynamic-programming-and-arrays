
import java.util.Scanner;

public class Lift{

public static void main(String[] args)
{

    int floor;
    
    Scanner s=new Scanner(System.in);

    floor=s.nextInt();

    if(floor==13||floor==14)
    {
        System.out.println("Invalid floor");
        
    }

    int actualFloor;
    if(floor>13&&floor>14)
    {
        actualFloor=floor-2;
        System.out.println("You are at "+actualFloor);
    }
    else
    {
        actualFloor=floor;
        System.out.println("You are at "+actualFloor);
    }
}

}