/*----Written by :- Vishal Yadav----*/
/*----Date :- 21-06-23----*/

/*Program to demostrate pure virtual function and Abstract class*/

#include<iostream>
using namespace std;

/*This is an abstract class and we can't create object of abstract class because it is a incomplete class,
also it can contain non pure virtual functions but it should have atleast one PVF , abstract class provides
the implementation so that derived classes can override functions*/

class Baseclass
{
    public:
    int basevalue=1;
    virtual void print()=0;   //pure virtual function doesn't have any definition
};

class Inheritedclass : public Baseclass
{
    public:
    int inherivalue=2;
    virtual void print()
    {
        cout<<"The value of inherivalue "<<inherivalue<<endl;
    }
};

int main()
{
   // Baseclass baseobject;   //Since Baseclass is an abstract class so we cannot create object of baseclass
   // baseobject.print();
   Inheritedclass* inheriptr = new Inheritedclass;
   inheriptr->print();
    return 0;
}