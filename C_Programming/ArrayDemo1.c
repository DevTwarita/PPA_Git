#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("%d\n", Arr);        //base adress i.e acc to class notes 100
    printf("%d\n", &Arr);       //adress of Arr i.e acc to class notes 100
    printf("%d\n", &Arr[0]);    //first element address i.e acc to class notes 100

    return 0;
}