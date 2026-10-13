#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float no = 3.14f;
    double d = 90.785634;

    printf("%c\n", ch); //1
    printf("%d\n", i);  //4
    printf("%f\n", no); //4
    printf("%lf\n", d); //8

    return 0;
}