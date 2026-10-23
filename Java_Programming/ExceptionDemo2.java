import java.util.*;

class ExceptionDemo2
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {11,21,51,101,111}; //static array indices 0, 1, 2, 3, 4
        int index = 0;
        
        System.out.println("Enter Index: ");
        index = sobj.nextInt();

        System.out.println("Element is : "+Arr[index]); //exception prone code 

        System.out.println("End of main");
    }
}
