#include "Marvellous.h"

//Entry point function
int main()
{
    float fRet = 0.0f;

    fRet = Area(7.5f);

    printf("Area of circle is : %f \n", fRet);

    return 0; // return success
}

//gcc Main.c Helper.c -o Myexe
//myexe.exe

//gcc Main.c Helper.c -save-temps -o Myexe