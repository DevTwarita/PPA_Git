#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        void Display()
        {
            cout<<"Inside Display \n";
        }
};

int main()
{
    PPA pobj; //object chya aat madhe characteristics la jaga milte behaviours(function) la nahi

    pobj.No1 = 11;
    pobj.No2 = 21;

    pobj.Display();

    cout<<pobj.No1<<"\n";
    cout<<pobj.No2<<"\n";

    return 0;
}

//object chi size = sizeof non static elements