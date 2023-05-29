/*----Written by :- Vishal Yadav----*/
/*----Date :- 22-05-23----*/

/*Program to add two fractions using Friend function*/

#include<iostream>
using namespace std;

class Fraction 
{
    friend void addfraction(const Fraction &f1, const Fraction &f2);
    private:
    int numerator;
    int denominator;
    public:
    Fraction ();
    void getdata(int ,int);
    void printdata();
};

/*This is constructor*/

Fraction :: Fraction ()
{
    numerator=1;
    denominator=1;
}

/*Member function to assign data*/

void Fraction :: getdata(int num , int deno)
{
    numerator =num;
    denominator=deno;
}

/*Member function to print data*/

void Fraction :: printdata()
{
    cout<<"The fraction is: "<<numerator<<"/"<<denominator<<endl;
}

/*Friend function (Friend functions are not member functions but these are just functions with privileges)*/

void addfraction(const Fraction &f1, const Fraction &f2)
{
    Fraction f3;
    f3.numerator=(f1.numerator*f2.denominator) + (f2.numerator*f1.denominator);
    f3.denominator =f1.denominator*f2.denominator;

    /*We can call member function witnin any functions using class objects*/
    f3.printdata();      
    return;
}

int main()
{
    Fraction f1;
    f1.getdata(5,6);
    f1.printdata();
    Fraction f2;
    f2.getdata(7,8);
    f2.printdata();

    /*addfraction function is just another function which should be called without objects*/
    addfraction(f1,f2);    
    return 0;
}