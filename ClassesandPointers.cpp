/*----Written by :- Vishal Yadav----*/
/*----Date :- 31-05-23----*/

/*Program to demonstrate the use of pointers with classes*/

#include<iostream>
using namespace std;

class Student
{
   private:
   //Allocated members using dynamic memory allocation
   int* roll = new int;
   int* marks = new int[5];
   public:
   void assign();
   void print(); 
};

void Student :: assign()
{
    cout<<"Enter the roll no. of student: ";
    cin>>*roll;
    cout<<"Enter the marks of student in 5 subjects: ";
    for(int i=0; i<5; i++)
    cin>>marks[i];
}

void Student :: print()
{
    cout<<"Roll no. is: "<<*roll<<endl;
    cout<<"Marks in 5 subjects are: ";
    for(int i=0; i<5; i++)
    cout<<marks[i]<<" ";
}

int main()
{
    //Similarly we can create objects using dynamic memory allocation
    Student* st1 = new Student;
    (*st1).assign();
    (*st1).print();
    //st1 -> print();   We can do this also

    return 0;
}