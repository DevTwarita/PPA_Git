#include<stdio.h>

int main()
{
    int std = 0;

    printf("Enter your standard to know your exam time : \n");
    scanf("%d", &std);

    switch (std)
    {
    case 1:
        printf("Your exam time is 9:30 AM \n");
        break;
    case 2:
        printf("Your exam time is 10.30 AM \n");
        break;
    
    case 3:
        printf("Your exam time is 11.30 AM \n");
        break;

    default:
        printf("Entered standard is INVALID \n");
        break;
    }
    return 0;
}