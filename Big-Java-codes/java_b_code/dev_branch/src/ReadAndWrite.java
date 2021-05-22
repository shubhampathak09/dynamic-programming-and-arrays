import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;

public class ReadAndWrite {



    void readFile() throws FileNotFoundException
    {
        FileInputStream fi=new FileInputStream("d:/abc.txt");


    }
    void saveFile() throws FileNotFoundException
    {
        FileOutputStream fo=new FileOutputStream("d:/xyz.txt");
    }
    // checked exception

    // either use try catch or throws


}


class Test2 {

    public static void main(String args[])
    {

        ReadAndWrite rw=new ReadAndWrite();

        try {
            rw.readFile();  // if i use throws it will handle the exception but it will call the deafult exceptio handler and result in unwarrnted termination of program
        } catch(FileNotFoundException e)
        {
            e.printStackTrace();
        }


        System.out.println("hello");
    }
}