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


// static method belongs to a class not an abject

//1. Static method can access only static data,cant access a not static data

// 2.Static method cant access non static method

// 3.Static method we cant use this method

//in simple methods we can use this, that is through instance method we can
//but not in static method

// we cant use super in static

//Rules