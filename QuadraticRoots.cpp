/*----Written by :- Vishal Yadav----*/
/*----Date :- 26-04-23----*/

/*Program to find real roots of a Quadratic Equation*/

#include<iostream>
#include<cmath>
using namespace std;

void getdata(int* p1,int* p2,int* p3);
void quadraticroots(int* p1, int* p2,int* p3);

int main()
{
    int a,b,c;
    getdata(&a,&b,&c);
    quadraticroots(&a,&b,&c);
    return 0;
}

/*Function to take coefficients from user*/

void getdata(int* p1,int* p2,int* p3)
{
    cout<<"Enter the coefficients of the eqaution:";
    cin>>*p1>>*p2>>*p3;
    cout<<"Coefficients are: "<<*p1<<" "<<*p2<<" "<<*p3<<endl;
}

/*Function to calculate roots of the equation*/

void quadraticroots(int* p1, int* p2,int* p3)
{
    int d=pow(*p2,2)-4*(*p1)*(*p3);
    if(((*p1)||(*p2))==0)
    {
        cout<<"Invalid equation!! No Solution"<<endl;
    }
    else if((*p1)==0)
    {
        cout<<"Only one root: ";
        cout<<(-*p3)/(*p2);
    }
    else
    {
        if(d<0)
        {
            cout<<"Imaginary roots!!!"<<endl;
        }
        else if (d>=0)
        {
            cout<<"First root is: ";
            cout<<(-*p2+sqrt(d))/2*(*p1)<<endl;
            cout<<"Second root is: ";
            cout<<(-*p2-sqrt(d))/2*(*p1)<<endl;
        }
    }
}

