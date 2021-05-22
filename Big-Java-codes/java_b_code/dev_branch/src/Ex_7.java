public class Ex_7 {

    public static void main(String args[])
    {
        try {
            int a = 100;
            int b = 1;
            int c = a / b;

             System.out.println(c);

        }
        catch (Exception e) {
            e.printStackTrace();


            // printied by default exception handler in jvm
            // abnormal termination
        }

        Ex_7 ex=new Ex_7();
        ex.divide();
        System.out.println("hello");

    }

    void divide()
    {
        try {
            int a = 100;
            int b = 0;
            int c = a / b;
            System.out.println(c);
        }catch(Exception e) {
            e.printStackTrace();
    }
    }
    }


