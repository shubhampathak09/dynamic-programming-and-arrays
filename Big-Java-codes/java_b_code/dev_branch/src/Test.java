import java.io.FileInputStream;
import java.io.FileNotFoundException;

// io class
public class Test {

    public static void main(String args[]) throws FileNotFoundException, ClassNotFoundException {
        // this is used to read data
        FileInputStream fis=new FileInputStream("d:/abc.txt");

        Class.forName("com.mysql.jdbc.Driver");
    }

    int a=100;
    int b=0;
    int c=a/b;

   // System.out.println(c);

}
// Diff between compile and run time exception
// compiler can check exceptions ->compile time exception
// runtime