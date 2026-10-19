#include<iostream>
using namespace std;

int main()
{
    int value1 = 0, value2 = 0, result = 0; //local variables that are inside function

    cout<<"Enter First Number: \n";
    cin>>value1;                    //no need to use & operator

    cout<<"Enter Second Number: \n";
    cin>>value2;

    result = value1 + value2;       //business logic should have created another function for this for standard procedure

    cout<<"Addition is: "<<result<<"\n";

    return 0;
}