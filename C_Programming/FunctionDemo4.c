#include<stdio.h>

int main()
{
    //0 is added so that the old value (garbage value) does not get assigned its a coding convention
    int Value1 = 0, Value2 = 0, Ans = 0;

    printf("Enter first no: \n");
    scanf("%d", &Value1);

    printf("Enter second no: \n");
    scanf("%d", &Value2);

    Ans = Value1 + Value2;  //business logic

    printf("Addition is: %d\n", Ans);

    return 0;
}