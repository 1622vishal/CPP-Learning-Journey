/*----Written by :- Vishal Yadav----*/
/*----Date :- 30-05-23----*/

/*Program to demonstrate the use of static members i.e., data and functions*/

/*!!!Remember one thing that static members should be accessed using scope resolution and non static members 
should be accessed using objets with dot operator just to make things clear!!!*/

#include<iostream>
using namespace std;

class Students
{
    private:
    //Declaring Static data member 
    static int serialno;
    int roll;
    float fees;
    public:
    void initialize()
    {
        cout<<"Enter the roll no.:";
        cin>>roll;
        cout<<"Enter the fees:";
        cin>>fees;
        serialno++;
    }
    
    void print()
    {
        cout<<"Roll no. is: "<<roll<<endl;
        cout<<"Fees is: "<<fees<<endl;
        cout<<"Serial number is: "<<serialno<<endl;

    }
    static void printsr();   //We can define it here also
};

int Students :: serialno;     //Defining static data member also it's default value is 0.However it can be changed

//Defining static member function, also remember that static function can only access static members
void Students :: printsr()
{
    cout<<"The total number of students: "<<serialno<<endl;
    // cout<<roll;  This is wrong 
}

int main()
{
    /*We can do this only if it is public
    Students :: serialno=9;  
    cout<<Students::serialno;  */

    /*But cannot do with non static members seenext line */
    // Students :: roll =8;  

    Students s1,s2,s3;
    s1.initialize();
    s1.print();

    s2.initialize();
    s2.print();

    s3.initialize();
    s3.print();

    Students :: printsr();   //This is how we call member functions

    return 0;
}