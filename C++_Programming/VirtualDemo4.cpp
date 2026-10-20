#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public :
        int i, j;   //8 byte

        void fun()
        {   cout<<"Base Fun\n";  }

        void gun()
        {   cout<<"Base Gun\n";  }

        virtual void sun()
        {   cout<<"Base Sun\n";  }

        virtual void run()
        {   cout<<"Base Run\n";  }
};  //16 bytes including pointer

#pragma pack(1)
class Derived : public Base
{
    public :
        int x;      //4 byte

        void fun()
        {   cout<<"Derived Fun\n";  }

        void sun()
        {   cout<<"Derived Sun\n";  }

        virtual void mun()
        {   cout<<"Derived mun\n";  }

        virtual void bun()
        {   cout<<"Derived bun\n";  }
};  //20 bytes including x 4 bytes

int main()
{
    Base *bp = new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    bp->mun(); //error
    bp->bun();  //error

    return 0;
}