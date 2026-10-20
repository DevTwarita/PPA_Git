#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;        //non static - AKA instance variable
        int No2;        //non static
        static int X;   //AKA class variable

        Demo(int i, int j) //parameterised constructor
        {
            No1 = i;    //non static characters initialisation in constructor
            No2 = j;
        }

        void fun()
        {
            cout<<"Inside fun\n";
            cout<<No1<<"\n";
            cout<<No2<<"\n";
            cout<<X<<"\n";
        }

        static void gun()
        {
            cout<<"Inside gun\n";
            cout<<X<<"\n";
        }
};

int Demo :: X = 11; //:: scope resolution //initialisation of static variable outside class because object creation is related to constructor

int main()
{
    cout<<Demo :: X<<"\n";

    Demo :: gun();

    return 0;
}