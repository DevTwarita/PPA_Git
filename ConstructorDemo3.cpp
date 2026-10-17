#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        //Default constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }

        //Parametrised constructor
          PPA(int a, int b)
        {
            cout<<"Inside Parametrised Constructor\n";
        }

        //Copy constructor
        PPA(PPA &obj)  //& is a reference here
        {
            cout<<"Inside copy constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    PPA pobj1;          //Default
    PPA pobj2(11,21);   //Parametrised
    PPA pobj3(pobj1);   //copying pobj1
    
    return 0;
}