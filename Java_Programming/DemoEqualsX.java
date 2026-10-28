class Marvellous
{
    public int i, j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }
}

class DemoEqualsX
{
    public static void main(String A[])
    {
        Marvellous mobj1 = new Marvellous(11,21);//new keyword ekdach use kela 
        //so memory ekdach alocate hote
        Marvellous mobj2 = mobj1; //changed here

        if(mobj1.equals(mobj2))
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
//this files is still not improved version