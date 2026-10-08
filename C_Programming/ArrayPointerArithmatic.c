#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};
    int *p = &(Arr[1]);
    int *q = &(Arr[3]);

    printf("%d\n", p); //Address of Arr[1]
    printf("%d\n", q); //Address of Arr[3]

    printf("%d\n", p + 2); //p+2*sizeof pointer type
    printf("%d\n", q - 2); //q-2*sizeof pointer type
    printf("%d\n", q - p); //q-p/sizeof pointer type
    return 0;
}