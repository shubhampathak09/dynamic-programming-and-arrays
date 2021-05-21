public class Monsters {


    int power=100;  // default values
    int health=200; //default values

    void action()
    {
        System.out.println("Monster picks an item");
    }
}

class AntKing extends Monsters {

   int extralif;




    void action()
    {
        System.out.println("Ant picks an item");

    }

    public static void main(String args[])
    {

        Monsters m=new AntKing();

        Monsters m1=new Monsters();

     //   AntKing a=new Monsters();
       // a.action();

        AntKing a=new AntKing();
        a.action();

        m.action();

        m1.action();


       // m.extralif=1;

    }
}



/*
-Object
  -Throwable
      -exception
        -checked exceptions or compilte time exceptions
        -unchecked exception or runtime exception
      -errors
         -unchecked exception or runtime exception
*/

/*

ClassNotFoundException
NoSuchMehtodException
IOException
 EOFException
 FileNotFoundException
 InteruptedIOException
*/

/*
Error Virtual Machine Error
        Stack overflow
                out of memmory error
        linkage error
                */