#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public :
        int i, j;   //8 byte
        void fun()                  //1000
        {   cout<<"Base Fun\n";  }
        void gun()                  //2000
        {   cout<<"Base Gun\n";  }
        virtual void sun()          //3000
        {   cout<<"Base Sun\n";  }
        virtual void run()          //4000
        {   cout<<"Base Run\n";  }
};  //16 bytes including pointer

#pragma pack(1)
class Derived : public Base
{
    public :
        int x;      //4 byte
        void fun()                  //5000
        {   cout<<"Derived Fun\n";  }
        void sun()                  //6000
        {   cout<<"Derived Sun\n";  }
        virtual void mun()          //7000
        {   cout<<"Derived mun\n";  }
        virtual void bun()          //8000
        {   cout<<"Derived bun\n";  }
};  //20 bytes including x 4 bytes

int main()
{
    Base *bp = new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun(); error
    //bp->bun(); error

    return 0;
}