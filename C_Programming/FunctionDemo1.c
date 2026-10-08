#include<stdio.h>

int main()
{
    int Value1 = 10; //local variables gets stored in stack
    int Value2 = 11; 
    int Ans = 0;

    Ans = Value1 + Value2;

    printf("Addition is : %d\n", Ans);
    
    return 0;
}

//if global variable i.e. out of function it is stored in data section