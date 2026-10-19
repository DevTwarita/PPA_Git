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
            cout<<"Indside Derived sun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";     //i,j
    cout<<sizeof(Derived)<<"\n"; //i,j,x,y

    return 0;
}