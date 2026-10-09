#include<stdio.h>

void Addition(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2; //business logic
    printf("Addition is: %d\n", Result);
}

int main()
{    //0 is added so that the old value (garbage value) does not get assigned its a coding convention
    int Value1 = 0, Value2 = 0;

    printf("Enter first no : \n");
    scanf("%d", &Value1);

    printf("Enter second no : \n");
    scanf("%d", &Value2);

    Addition(Value1, Value2);

    return 0;
}