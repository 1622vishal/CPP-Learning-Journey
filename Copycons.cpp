/*----Written by :- Vishal Yadav----*/
/*----Date :- 18-05-23----*/

/*Demonstrate the use of Copy constructor*/
/*Copy constructor is almost same as any constructor, it just makes the copy of other object */

#include<iostream>
using namespace std;
class CC
{
    private:
    int a;
    float b;
    public:
    /*Copy Constructor*/
    CC(CC &Num1)
    {
        a=Num1.a;
        b=Num1.b;
    }

    //Constructor
    CC()
    {
        a=5;
        b=4;
    }
    void assign();
    void show();
};

/*Function to assign values for a object*/
void CC :: assign()
{
    a=100;
    b=200;
}

void CC :: show()
{
    cout<<"The values are :"<<a<<" "<<b<<endl;
}
int main()
{
    CC num1;
    num1.assign();     //assign function called for num1 

    /*We can use copy constructors even if the user defines a function for assigning values*/
    CC num2(num1);     //copy constructor called and copied the values of num1 to num2
    CC num3 = num1;    // Same as above line 
    num1.show();
    num2.show();
    num3.show();
    return 0;
}