#include<iostream>
using namespace std;

#pragma pack(1)
class Demo
{
    int i;
    char ch;  //by default private until specified in main function
    float f;
};

//int main is outsider for class Demo
int main()
{
    Demo dobj;

    dobj.i = 11;
    dobj.ch = 'A'; //3 errors
    dobj.f = 3.14;
    
    return 0;
}

