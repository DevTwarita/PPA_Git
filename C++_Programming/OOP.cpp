#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;
        
        Arithematic() //default constructor
        {
            No1 = 0;
            No2 = 0;
        }

        Arithematic(int i, int j) //parameterised constructor 
        {
            No1 = i;
            No2 = j;
        }
};

int main()
{
    Arithematic aobj1; // will call default constructor

    Arithematic aobj2(10,11); // will call parameterised constructor

    cout<<aobj1.No1<<"\n"; //0
    cout<<aobj1.No2<<"\n"; //0

    cout<<aobj2.No1<<"\n"; //10
    cout<<aobj2.No2<<"\n"; //11

    return 0;
}

//first memory allocation then constructor

//jya type che constructor available ahet tyache object tayar hotat