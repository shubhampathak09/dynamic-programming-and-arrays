import java.util.Scanner;


class Lift
{

public static void main(String[] args)
{
Scanner in=new Scanner(System.in);
System.out.print("Floor: ");
int floor=in.nextInt();

int actualFloor;
if(floor>13)
{
actualFloor=floor-1;

}
else
{
actualFloor=floor;
}

System.out.println("The elevator will travel to the actual floor "+actualFloor);
}

}

// to compile use javac Lift.java
// to tun java Lift
// and thats it//