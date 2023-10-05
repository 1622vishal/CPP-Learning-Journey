/*----Written by :- Vishal Yadav----*/
/*----Date :- 20-06-23----*/

/*Program to demonstarte Multiple Inheritance*/

#include<iostream>
using namespace std;

class Baseclass1
{
    public:
    int val1;
    Baseclass1(int v1)
    {
        val1=v1;
    }
    void print()
    {
    cout<<"The value of val1 is: "<<val1<<endl;
    }
};

class Baseclass2
{
    public:
    int val2;
    Baseclass2(int v2)
    {
        val2=v2;
    }
    void print()
    {
    cout<<"The value of val2 is: "<<val2<<endl;
    }
};

/*This is how we define a class that inherits from two classes */
class Derived1 : public Baseclass1 ,public Baseclass2
{
    public:
    int val3;
    /*Since this class inherits from two classes so we define a way to call the constructors for those two base classes
    ,Also we covered this part in InheritanceConstructor code */
    Derived1(int v1, int v2, int v3) : Baseclass1(v1), Baseclass2(v2)
    {
        val3=v3;
    }

    /*One more imp. point is that function overriding is present only in Inheritance*/
    
    void print()  //Overriden the print function but our baseclass function is not lost we can still call it 
    {
        cout<<"Baseclass1 function called"<<endl;
        Baseclass1::print();   //This is how we call the overriden function but it will print that value which is in
        //derived class don't know why
        cout<<"The value of val1, val2, val3 is :"<<val1<<" "<<val2<<" "<<val3<<endl;
    }
};

int main()
{
    Baseclass1 bc1(6);
    bc1.print();
    
    Baseclass2 bc2(7);
    bc2.print();

    Derived1 d1(1,2,3);
    d1.print();

    bc1.print();
    bc2.print();
    d1.print();

    return 0;
}