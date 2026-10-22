class Base
{
        int i, j;
        void fun()                  //1000
        {   System.out.println("Base Fun");  }
        void gun()                  //2000
        {   System.out.println("Base Gun");  }
        void sun()          //3000
        {   System.out.println("Base Sun");  }
        void run()          //4000
        {   System.out.println("Base Run");  }
}

class Derived extends Base
{
        int x;
        void fun()                  //5000
        {   System.out.println("Derived Fun");  }
        void sun()                  //6000
        {   System.out.println("Derived Sun");  }
        void mun()          //7000
        {   System.out.println("Derived mun");  }
        void bun()          //8000
        {   System.out.println("Derived bun");  }
}

class VirtualDemo6
{
    public static void main(String A[])
    {
        Base bp = new Derived(); //upcasting

        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
        //bp.mun(); //error
        //bp.bun(); //error
    }
}