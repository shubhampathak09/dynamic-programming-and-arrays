public class A {

    void say()
    {
        System.out.println("I am Mr A");
    }

}

 class B extends A{   // only once class can be public


    void say()
    {
        System.out.println("I am MR B");

        super.say();
    }

    public static void main(String[] args)
    {
        A Oa=new A();
        B Ob=new B();

        Ob.say();

        // use of super key word

        System.out.println("Second call check");
        Oa.say();
    }

}
