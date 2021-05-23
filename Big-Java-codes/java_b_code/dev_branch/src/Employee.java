public class Employee {
    
     int empid;
    String name;
    static String companyname="Oracle";

    Employee(int empid,String name)
    {
        this.empid=empid;
        this.name=name;
       // this.companyname=companyname;
    }
    
    void display()
    {
        
        System.out.println(empid+" "+name+" "+companyname);

    }
    public static void main(String args[])
    {

        Employee e1=new Employee(1,"Shubham");
        Employee e2=new Employee(2,"Monu");

        e1.display();
        e2.display();

        e1.companyname="GoldmanSachs";  // static variable got changed

        e1.display();


        e2.display();


      //  Employee e3=new Employee(3,"cdv");
       // e3.companyname="cgi"

        e2.display();



        // changing the stativ variable will cganhe for all objects !!!!!!!!!!!!!!!!
    }
    
}
