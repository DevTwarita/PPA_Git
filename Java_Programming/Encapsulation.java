class Marvellous
{
    public int No1;
    public int No2;

    public void fun()
    {
        System.out.println("Inside Fun");
    }
}

class Encapsulation     // main is here so the file name Encapsulation
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous(); //'new' keyword shivay object banat nai

        mobj.fun(); //calling fun function //will print "Inside Fun"

        System.out.println(mobj.No1); // prints 0
        System.out.println(mobj.No2); // prints 0
    }
}

//javac Encapsulation.java will create 2 .class files each class gets diff .class files