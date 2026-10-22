import java.util.*; // '*' - for everything inside a package
//package is a folder of related .class files

class Selection3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0; // = assignment operator //== comparison operator

        System.out.println("Enter your age : ");
        No = sobj.nextInt();

        if(No < 18) //changed <
            {
                System.out.println("Not Allowed");
            }
        else
            {
                System.out.println("Allowed");
            } 
            sobj.close(); //closing scanner not tought by sir i searched and found it myself for removing the warning               
    }  
}
