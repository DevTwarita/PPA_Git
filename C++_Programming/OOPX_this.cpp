#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;
        
        Arithematic() //default constructor
        {
            this-> No1 = 0;
            this-> No2 = 0;
        }

        Arithematic(int i, int j) //parameterised constructor 
        {
            this-> No1 = i;
            this-> No2 = j;
        }

        //int Addition(Arithematic*this)
        int Addition() //mall madhla dukan
        {
            int Ans = 0;
            Ans = this->No1 + this->No2;
            return Ans;
        }
};

int main()
{
    Arithematic aobj1(10,11);
    int Result = 0;
    
    //Result = Addition(aobj1); internally treated as
    Result = aobj1.Addition();

    cout<<"Addition is: "<<Result<<"\n";
    
    return 0;
}