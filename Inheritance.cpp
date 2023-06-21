/*----Written by :- Vishal Yadav----*/
/*----Date :- 19-06-23----*/

/*Program to demonstrate the use of Inheritance*/
/*In inheritance all the members of the base class are inherited into derived class in other words a copy of base
class is created inside the inherited class*/

#include<iostream>
#include<cmath>
using namespace std;

class Polygons
{
    public:    //If we want to use members of this class in derived class then we should not declare them private
               //because derived class cannot access private members it will show error
    int area;
    int perimeter;
    void printarea()
    {
        cout<<"The area of given polygon is: "<<area<<endl;
    }
    void printperimeter()
    {
        cout<<"The perimeter of given polygon is: "<<perimeter<<endl;
    }

};

class Triangle : public Polygons  // We can use any inheritance type i.e., private or protected
{
    public:
    int side1;
    int side2;
    int side3;

    /*Since we have declared a constructor here ,it's our responsibility to provide a code to this constructor 
    to call the base class constructor if we are using a constructor for base class members*/
    Triangle(int a, int b, int c)
    {
        side1=a;
        side2=b;
        side3=c;
    }
    void calcarea()
    {
        int s=(side1+side2+side3)/2;
        area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
    void calcperi()
    {
        perimeter = side1 + side2 + side3;
    }
};

class Square : public Polygons
{
    public:
    int side;
    Square(int x)
    {
        side=x;
    }
    void calcarea()
    {
        area=side*side;
    }
    void calcperi()
    {
        perimeter=4*side;
    }
};

class Rectangle : public Polygons
{
    public:
    int length;
    int width;
    Rectangle(int x, int y)
    {
        length=x;
        width=y;
    }
    void calcarea()
    {
        area=length*width;
    }
    void calcperi()
    {
        perimeter=(2*length)+(2*width);
    }
};

int main()
{
    Triangle T1(4,5,6);   //We will use the name of that class whose object we want to create even if it is inherited
    T1.calcarea();
    T1.calcperi();
    T1.printarea();
    T1.printperimeter();
    Square S1(6);
    S1.calcarea();
    S1.calcperi();
    S1.printarea();
    S1.printperimeter();
    Rectangle R1(7,8);
    R1.calcarea();
    R1.calcperi();
    R1.printarea();
    R1.printperimeter();
    return 0;
}

/*We can do many more things in this program such as we can create a function instead of constructors to assign
different values each time and can also give messages for each polygon before printing their area and perimeter*/