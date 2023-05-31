/*----Written by :- Vishal Yadav----*/
/*----Date :- 31-05-23----*/

/*Program to demonstrate the use of objects array*/

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int width;
    public:
    Rectangle()     //No parameters are given as default constructor is called when object array is created
    {
        length=0;
        width=0;
    }
    Rectangle(int l, int b)
    {
        length=l;
        width=b;
    }
    void assign()
    {
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"Enter the width: ";
        cin>>width;
    }
    void print()
    {
        cout<<"Length is :"<<length<<endl;
        cout<<"Width is :"<<width<<endl;
    }
};

int main()
{
    //We will create an array of objects to store the dimension of n rectangles
    Rectangle r[4];   //When array of objects is created only default constructor is called
    r[0].print();

    /*Now how to use the functions for these array objects?
    Just like we did when we assigned the values for integers i.e., using for loop*/
    
    for(int i=0; i<4; i++)
    {
        cout<<"Enter the dimension for the rectangle "<<i+1<<endl;
        r[i].assign();
    }
    for(int i=0; i<4; i++)
    {
        r[i].print();
    }
    r[0].print();

    /*Here in the next line the initialisation constructor is called twice which assigned values for
    r1[0] and r1[1]*/
    Rectangle r1[5]= {Rectangle(3,4) , Rectangle(5,6)};    //This initialised two objects only
    r1[1].print();
    r1[3].print();
    return 0;
}