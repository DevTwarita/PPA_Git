#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]); //21
    q = &(Arr[3]); //101

    printf("%d\n", *p);
    printf("%d\n", *q);

    p++; //will go to next element 51
    q--; //will go back to element 51

    printf("%d\n", *p); //51
    printf("%d\n", *q);
        
    return 0;
}