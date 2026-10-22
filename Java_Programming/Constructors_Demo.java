class Demo
{
    public Demo()
    {
        System.out.println("Inside Default constructor");
    }

    public Demo(int i, int j)
    {
        System.out.println("Inside Parameterised constructor");
    }
}
class Constructors_Demo 
{
    public static void main(String A[])
    {
        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo(11,21);

        System.out.println(dobj1);
        System.out.println(dobj2);      // I called objects since there was a warning
    }
}
