/*----Written by :- Vishal Yadav----*/
/*----Date :- 20-06-23----*/

#include<iostream>
using namespace std;

class Baseclass
{
    public:
    int a;
    int b;
    Baseclass(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void print()
    {
        cout<<"The values of a and b is: "<<a<<" "<<b<<endl;
    }
};

class Inheritedclass : public Baseclass
{
    public:
    int x;
    int y;
    // Inheritedclass(int x1, int y1) 
    // {
    //     x=x1;
    //     y=y1;
    // }

    /*The above commented part will show error because our base class doesn't have any default cons and whenever 
    object of derived class is created then default cons for base class is called automatically by the compiler,
    So to overcome this problem we have to provide some code to our derived class cons to call base class cons 
    in case if we created one*/
    
    //Inheritedclass(int x1, int y1) : Baseclass (4,5)    //We have to do something like this
    Inheritedclass(int a1, int b1, int x1, int y1) : Baseclass (a1,b1)
    {
        x=x1;
        y=y1;
    }
    void print()
    {
        cout<<"Value of x and y is: "<<x<<" "<<y<<" and "<<"Value of a and b is: "<<a<<" "<<b<<endl;
    }
};

int main()
{
    Inheritedclass ob1(2,3,4,5);
    Baseclass ob2(12,13);      
    ob1.print();
    ob2.print();      //This will print the values of a and b in base class coz it is the object of base class
    return 0;
}