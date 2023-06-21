/*----Written by :- Vishal Yadav----*/
/*----Date :- 20-06-23----*/

/*Program to learn about static binding */

#include<iostream>
using namespace std;

class Baseclass
{
    public:
    int basevalue=1;
    void print()
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
    Baseclass baseobject;       //Object of base class
    baseobject.print();         //It will call the Baseclass print function
    Inheritedclass inheriobject;     //Object of inherited class
    inheriobject.print();            //It will call the Inheritedclass print function
    //It is simple as we can see

    Baseclass* baseptr = &baseobject;        //Pointer to base class object
    baseptr->print();             //It will call the Baseclass print function
    baseptr = &inheriobject;          //Now it's pointing to derived class object
    baseptr->print();           //It will also call the Baseclass print function
    /*The reason behind is that the pointer is associated to base class and this is called static binding*/

    Inheritedclass* inheriptr = &inheriobject;
    inheriptr->print();
    //inheriptr = &baseobject;   Vice versa is not possible althouh this pointer can access all the inherited members

    //Now we will do the same thing using dynamic memory allocation
    Baseclass* baseptr2 =new Baseclass;     //allocated object dynamically for base class
    baseptr2->print();
    baseptr2 = new Inheritedclass;           //allocated object dynamically for inherited class
    baseptr2->print();      //It will call the base class print function both time 

    return 0;
}