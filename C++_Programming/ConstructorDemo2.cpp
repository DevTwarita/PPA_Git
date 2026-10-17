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

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    PPA pobj1;          //Default
    PPA pobj2(11,21);   //Parametrised
    
    return 0;
}