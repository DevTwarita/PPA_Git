#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    struct Demo dobj1; //object1
    struct Demo dobj2; //object2

    struct Demo *dp = NULL; //pointer

    dp = &dobj2; //dp pointing to object2

    //Direct Accessing operator
    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.99f;
    
    //Indirect Accessing operator
    dp->i = 21;
    dp->ch = 'B';
    dp->f = 91.99f;

    printf("%d\n", dobj1.i); //direct 11 
    printf("%d\n", dp->i);  //indirect 21
    
    return 0;
}