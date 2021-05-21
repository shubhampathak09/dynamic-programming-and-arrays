import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class Ex_4 {

    public static void main(String[] args) {
        FileInputStream fi = null;

        try {
            fi = new FileInputStream("d:/abc.txt");
        } catch (FileNotFoundException e) {
            System.out.println(e);
        } finally {
            if (fi != null) {
                try {
                    System.out.println("hello");
                    fi.close();
                } catch (Exception e) {
                    System.out.println(e);
                }

            }
            else
            {
                System.out.println("File object not created as no File Found:-");
            }
        }
    }
}