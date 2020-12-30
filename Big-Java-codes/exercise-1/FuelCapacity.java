import java.util.Scanner;


class FuelCapacity
{

public static void main(String args[])
{
    double actual_amount;
    double fuel_tank;
    Scanner s=new Scanner(System.in);
    
    System.out.println("Enter fuel in tank ");
    actual_amount=s.nextInt();

    System.out.println("Enter fuel_tank_size ");
    fuel_tank=s.nextInt();

    double percentage=(actual_amount)/(fuel_tank);


    if(percentage<0.1)
    System.out.println("Red");
    else
    System.out.print("Green");

}

}