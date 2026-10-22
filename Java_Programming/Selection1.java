import java.util.*; // '*' - for everything inside a package
//package is a folder of related .class files

class Selection1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0; // = assignment operator //== comparison operator

        System.out.println("Enter number : ");
        No = sobj.nextInt();

        if((No % 2) == 0)
            {
                System.out.println("Even number");
            }
        else
            {
                System.out.println("Odd number");
            }      
            sobj.close(); // Closing scanner manually          
    }  
}
