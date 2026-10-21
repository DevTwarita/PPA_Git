class Base
{
    public int i, j;

    public Base() //constructor private lihita yet nahi
    {
        System.out.println("Inside Base constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }

    public void gun()
    {
        System.out.println("Inside Base gun");
    }
}

class Derived extends Base
{
    public int x, y;
    
    public Derived()
    {
        System.out.println("Inside Derived constructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
}

class SingleLevel
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();

        dobj.fun();
        dobj.gun();
        dobj.sun();
    }
}
