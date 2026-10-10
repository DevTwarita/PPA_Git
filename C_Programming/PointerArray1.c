#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    printf("%d\n", Arr[2]);     //51
    printf("%d\n", *(Arr + 2)); //51
    printf("%d\n", *(2 + Arr)); //51
    printf("%d\n", 2[Arr]);     //51
    
    return 0;
}