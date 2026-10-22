import java.util.*; // '*' - for everything inside a package
//package is a folder of related .class files

class Selection2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0; // = assignment operator //== comparison operator

        System.out.println("Enter your age : ");
        No = sobj.nextInt();

        if(No >= 18)
            {
                System.out.println("Allowed");
            }
        else
            {
                System.out.println("Not allowed");
            }        
            sobj.close(); // Closing scanner manually
    }  
}
