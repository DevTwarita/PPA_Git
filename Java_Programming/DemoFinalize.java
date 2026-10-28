class Marvellous
{
    public int i, j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }

    protected void finalize()
    {
        System.out.println("Inside finalize");
    }
}

class DemoFinalize
{
    public static void main(String A[])
    {
        Marvellous mobj1 = new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(11,21);

        mobj1 = null; // done with the work so call garbage collector 
        //it is not sure that finalize will get called because gc is there at that time or not
        mobj2 = null; //donhi che kaam zale so come and collect garbage collector
        
        System.gc(); //deliberately calling Garbage collector to collect garbage

        System.out.println("End of main");
    }
}
//protected why? parent kadun yety so protected