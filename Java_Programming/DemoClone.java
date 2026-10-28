class Marvellous implements Cloneable //we cant write clone method if we dont implement Clonable
{
    public int i, j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }

    public Object clone() throws CloneNotSupportedException  //clone method generates exceptions
    //clone method ch name return value is object which can return anything
    {
        return super.clone(); //calling parent //one level up
    }
}

class DemoClone
{
    public static void main(String A[]) throws Exception
    {
        Marvellous mobj1 = new Marvellous(11, 21);
        Marvellous mobj2 = (Marvellous)mobj1.clone(); //this will clone the mobj1 object

        System.out.println(mobj1.i + " : " + mobj1.j);
        System.out.println(mobj2.i + " : " + mobj2.j);

    }
}
//to copy/clone objects