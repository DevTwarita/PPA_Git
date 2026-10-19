#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public :
        int i , j;
        int Addition(int no1, int no2)      //1000
        {
            return no1 + no2;
        } //concrete

        virtual int Subtraction(int no1, int no2) = 0; //abstract  //----
};

#pragma pack(1)
class Derived : public Base
{
    public :
        int x;
        int Subtraction(int no1, int no2)   //2000
        {
            return no1 - no2;
        } //completed its responsibility
        int Multiplication(int no1, int no2)    //3000
        {
            return no1 * no2;
        } //added its own function
};

int main()  //this code is for understanding only pure virtual function only not paradigms
{
    Derived dobj;
    int Ret = 0;

    cout<<"Size of Base class: "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class: "<<sizeof(Derived)<<"\n";

    Ret = dobj.Addition(11,10);
    cout<<"Addition is: "<<Ret<<"\n";

    Ret = dobj.Subtraction(11,10);
    cout<<"Subtraction is: "<<Ret<<"\n";

    Ret = dobj.Multiplication(11,10);
    cout<<"Multiplication is: "<<Ret<<"\n";
       
    return 0;
}