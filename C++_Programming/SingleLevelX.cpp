#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        
        Base()
        {
            cout<<"Inside Base constructor\n";
        }

        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun\n";
        }

        void gun()
        {
            cout<<"Inside Base gun\n";
        }
};

class Derived : public Base
{
    public:
        int x, y;

        Derived()
        {
            cout<<"Inside Derived constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }

        void sun()
        {
            cout<<"Inside Derived sun\n";
        }
};

int main()
{
    Derived dobj; //scope and lifetime started

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0; //scope lifetime finished destructor will get called
}