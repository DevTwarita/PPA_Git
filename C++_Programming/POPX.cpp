#include<iostream>
using namespace std;

int Addition(int No1, int No2) // parameters of addition No1 and No2 are also local variables
{
    int Ans = 0;    //addition chya function cha local variables
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int value1 = 0, value2 = 0, result = 0;

    cout<<"Enter First Number: \n";
    cin>>value1;

    cout<<"Enter Second Number: \n";
    cin>>value2;

    result = Addition(value1, value2); //will jump to line 4

    cout<<"Addition is: "<<result<<"\n";

    return 0;
}

//procedure or function or method or API()