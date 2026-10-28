class Marvellous
{
    public int i, j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }

    public boolean equals(Object obj2) //upcasting parents class points to child class //overriding which comes from Object class
    {
        Marvellous temp = (Marvellous) obj2; //mobj2 is accessed by temp variable 

        if ((this.i == temp.i) && (this.j == temp.j)) 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class DemoEqualsXX
{
    public static void main(String A[])
    {
        Marvellous mobj1 = new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(11,21);

        if(mobj1.equals(mobj2)) //mobj1 will go to this reference it goes to it to "this" reference
        {
            System.out.println("Objects are equal");
        }
        else
        {
            System.out.println("Objects are not equal");
        }
    }
}
//to compare both objects if they are identical
//this is improved code it will compare the objects now