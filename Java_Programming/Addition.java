import java.util.Scanner; //util = utilities

class Addition
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 2, Ans = 0;

        Scanner sobj = new Scanner(System.in); //System.in is for keyboard

        System.out.println("Enter First No.: ");
        No1 = sobj.nextInt(); //to get input of integer store in No1

        System.out.println("Enter Second No.: ");
        No2 = sobj.nextInt(); //to get input of integer store in No2

        Ans = No1 + No2;      // Business logic stores it in Ans

        System.out.println("Addition is: "+Ans); //+ is concactenation operator // prints Ans

        sobj.close(); // Closing scanner manually
    }
}