import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

class Journal
{
    private final List<String> entries=new ArrayList<>();

    private static int count=0;

    // responsiblibits
    // add entries
    // remove entries

    public void addEntry(String text)
    {
        entries.add(""+(++count)+":"+text);
    }

    public void removeEntry(int index)
    {
        entries.remove(index);
    }

    // this above functionalitites are directly relevavent to journal


    @Override
    public String toString()
    {
        return String.join(System.lineSeparator(),entries);
        // /n  or /r/n-line break +crrige return in windows

    }


    // perist the joutnal

    public void save(String filename) throws FileNotFoundException
    {
        try(PrintStream out=new PrintStream(filename))
        {
            out.println(toString());
        }
    }
    // seperation of concerns

    public void load(String filename){

    }

    public void load(URL url)
    {}

}


class Persistence
{
    public void saveToFile(Journal journal,String filename,boolean overwrite) throws FileNotFoundException
    {
        if(overwrite||new File(filename).exists()){
            try(PrintStream out=new PrintStream(filename))
            {
                out.println(journal);
            }
        }
    }
// ram remote location and so on
/*    public Journal load(String filename)
    {

    }
    */

  //  public Journal load(URL url)
  //  {
//
   // }//


}


public class SRP {


    public static void main(String args[]) throws Exception
    {

        Journal journal=new Journal();

        journal.addEntry("I get interview oppourtunity from goldman sachs");
        journal.addEntry("today i was on production support");

 //        System.out.println(journal.toString());

        System.out.println(journal);


        Persistence persistence=new Persistence();

        String filename="C:\\Users\\bnpat\\Documents\\journal.txt";

        persistence.saveToFile(journal,filename,true);

        // now display the contents of faile

        // for this use below

        Runtime.getRuntime().exec("notepad.exe "+filename); // missed a space notepad.exe filename so got the error
    }


}
