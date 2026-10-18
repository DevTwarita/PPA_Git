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

class DerivedX : public Derived
{
    public:
        int a;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }
        
        void run()
        {
            cout<<"Inside DerivedX run\n";
        }
};

int main()
{
    DerivedX dobj; //scope and lifetime started

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    return 0; //scope lifetime finished destructor will get called
}