import java.util.*;

class ExceptionDemo1XX
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0 , No2 = 0 , Ans = 0;

        try
        {
            System.out.println("Enter First Number: ");
            No1 = sobj.nextInt();

            System.out.println("Enter Second Number: ");
            No2 = sobj.nextInt();

            Ans = No1 / No2;
        }
        catch(ArithmeticException aobj)
        {
            System.out.println("Exception occured : "+aobj);
        }
        catch(Exception eobj)
        {
            System.out.println("Inside generic catch");
        }
        finally
        {
            System.out.println("Inside Finally block");
        }

        System.out.println("Division is : "+Ans);
    }
}
