import java.util.*;

class ExceptionDemo2X
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {11,21,51,101,111}; //static array indices 0, 1, 2, 3, 4
        int index = 0;

        try
        {
        System.out.println("Enter Index: ");
        index = sobj.nextInt();

        System.out.println("Element is : "+Arr[index]); //exception prone code 

        System.out.println("End of main");
        }
        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("Inside catch"+aobj);
        }    
    }
}
