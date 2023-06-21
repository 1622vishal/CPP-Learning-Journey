/*----Written by :- Vishal Yadav----*/
/*----Date :- 20-06-23----*/

/*Program to learn about dynamic binding */
/*In dynamic binding we use virtual functions , we just place a keyword virtual before the function in base class*/

#include<iostream>
using namespace std;

class Baseclass
{
    public:
    int basevalue=1;
    virtual void print()
    {
        cout<<"The value of basevalue is: "<<basevalue<<endl;
    }
};

class Inheritedclass : public Baseclass
{
    public:
    int inherivalue=2;
    void print()
    {
        cout<<"The value of inherivalue is: "<<inherivalue<<endl;
    }
};

int main()
{
    Baseclass* baseptr = new Baseclass;
    baseptr->print();
    baseptr = new Inheritedclass;
    baseptr->print();

    Baseclass obbase;
    obbase.print();
}