#include<iostream>
using namespace std;

struct Arithematic //here we cant write contructor
{
    int No1;
    int No2;
};

int Addition(int No1, int No2) // parameters of addition No1 and No2 are also local variables
{
    int Ans = 0;    //addition chya function cha local variables
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    Arithematic aobj1;
    Arithematic aobj2;

    aobj1.No1 = 0;
    aobj1.No2 = 0;

    aobj2.No1 = 10;
    aobj2.No2 = 11;

    return 0;
}

//procedure or function or method or API()