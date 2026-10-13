#include<stdio.h>

// in bracket of pack we can use 1 or 2 or 4 or 8

#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    printf("%d\n", sizeof(struct Demo));
    
    return 0;
}