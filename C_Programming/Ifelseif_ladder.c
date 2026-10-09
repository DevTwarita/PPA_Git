#include<stdio.h>

int main()
{
    int std = 0;

    printf("Enter your standard to know your exam time: \n");
    scanf("%d", &std);

    if(std == 1)
    {
        printf("Your exam time is 9:30 AM \n");
    }
    else if (std == 2)
    {
        printf("Your exam time is 10.30 AM \n");
    }
     else if (std == 3)
    {
        printf("Your exam time is 11.30 AM \n");
    }
    else
    {
        printf("You have entered INVALID standard \n");
    }
    return 0;
}