import Marvellous.PPA;
import Marvellous.LB;
import Marvellous.Infosystems.Python;

class PackageDemo
{
    public static void main(String A[])
    {
        PPA pobj = new PPA();
        LB lobj = new LB();
        Python pyobj = new Python();

        pobj.PPA_fun();
        lobj.LB_fun();
        pyobj.Python_fun();
    }
}
