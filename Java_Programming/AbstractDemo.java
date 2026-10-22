abstract class Base
{
    public int i , j;
    
    public int Addition(int no1, int no2)
        {
            return no1 + no2;
        }

    public abstract int Subtraction(int no1, int no2); 
}

class Derived extends Base
{
    public int x;

    public int Subtraction(int no1, int no2)
        {
            return no1 - no2;
        } 

    public int Multiplication(int no1, int no2)
        {
            return no1 * no2;
        }
}

class AbstractDemo
{
    public static void main(String A[])     
        {
        Derived dobj = new Derived();
        int Ret = 0;

        Ret = dobj.Addition(11,10);
        System.out.println("Addition is: "+Ret);

        Ret = dobj.Subtraction(11,10);
        System.out.println("Subtraction is: "+Ret);

        Ret = dobj.Multiplication(11,10);
        System.out.println("Multiplication is: "+Ret);
}
}