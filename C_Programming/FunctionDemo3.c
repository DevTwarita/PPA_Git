#include<stdio.h>

//global variables (not a good programming practice anyone can change it no privacy)
int Value1 = 10; 
int Value2 = 11; 
int Ans = 0;

int main()
{
    //local variables
    Ans = Value1 + Value2;

    printf("Addition is : %d\n", Ans);
    
    return 0;
}