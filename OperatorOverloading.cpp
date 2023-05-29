/*----Written by :- Vishal Yadav----*/
/*----Date :- 29-05-23----*/

/*Program to demonstrate operator overloading using friend function*/
/*Opearator overloading is nothing but giving special meaning to an existing operator in C++ without
changing its original meaning.*/

#include <iostream>
using namespace std;

class Fraction
{
    private:
    int numerator;
    int denominator;
    public:
    //Default constructor
    Fraction()
    {
        numerator=0;
        denominator=0;
    }
    //Constructor
    Fraction(int num, int deno)
    {
        numerator=num;
        denominator=deno;
    }
    /*Special function to give special meaning to some operator*/
    friend Fraction operator +(Fraction& f1, Fraction& f2)
    {
        Fraction f3;
        f3.numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
        f3.denominator=f1.denominator*f2.denominator;
        return f3;
    }

    void print()
    {
        cout<<"Fraction is :"<<numerator<<"/"<<denominator<<endl;
    }

};
int main()
{
    Fraction f1(3,4);
    f1.print();
    Fraction f2(4,7);
    f2.print();
    Fraction f3=f1+f2;
    //For user defined types such as classes we have to overload operator i.e., define it
    //This is something like f3=f1.operator+(f2)  i.e., works like function call
    f3.print();
    /*We can do this because it is defined for builtin data types*/
    int x=4,y=6;
    int z=x+y;

    return 0;
}