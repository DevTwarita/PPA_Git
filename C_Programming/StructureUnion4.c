#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float Marks;
    };
};

int main()
{
    struct Demo dobj;

    printf("%d\n", sizeof(dobj)); 
    //as per concept output should be 8
    // but here is 16 assumes that memory is allocated in inner structure but not initialized 
    //why? it depends on three diff factors
    //os types 32 bits and 64 bits 
    //compiler types 32 bits and 64 bits
    //microprocessor 32, 64, 128 bits
    //os(Platform) - windows, linux, mac | compiler(runtime environment)- mingw gcc
    //microprocessor(Architecture) - intel, AMD, ARM

    return 0;
}