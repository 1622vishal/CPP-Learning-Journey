/*----Written by :- Vishal Yadav----*/
/*----Date :- 19-05-23----*/

/*Program to add two fractions using classes*/

#include<iostream>
using namespace std;

class Fraction 
{
    private:
    int numerator;
    int denominator;
    public:
    void assign(int ,int);
    void print();
    void addfraction(const Fraction&);
};

void Fraction :: print()
{
    cout<<"The fraction is: "<<numerator<<"/"<<denominator<<endl;
}

void Fraction :: assign(int n ,int d)
{
    numerator=n;
    denominator=d;
}

/*Since this function is called by f1 object so the values of numerator and denominator will be of f1*/
/*Result will also be stored in f1 object i.e., numerator and deno of f1 will be changed*/
void Fraction :: addfraction(const Fraction &f2)
{
    numerator=(numerator*f2.denominator + f2.numerator*denominator);
    denominator=denominator*f2.denominator;
}

int main()
{
    Fraction f1;
    f1.assign(5,6);
    f1.print();
    Fraction f2;
    f2.assign(7,8);
    f2.print();
    f1.addfraction(f2);       //This is binary function as it deals with 2 objects of class
    cout<<"Added Fraction!!"<<endl;
    f1.print();     //printed f1 object because it contains the added fraction
    /*f2 will still contain same values */
    f2.print();
    return 0;
}