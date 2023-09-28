/*----Written by :- Vishal Yadav----*/
/*----Date :- 16-05-23----*/

/*Program to learn about the classes*/

#include <iostream>
using namespace std;

/*Declaring a class*/
/*We can declare a class inside main function, However it is not a good practice*/

class College
{
private:
    int students;
    float fees;
    void exams();

public:
    int rank;
    int totalstudents(int n);
    int revenue();
};
class Coaching
{
private:
    int students;
    float fees;
    void exams();

public:
    int result;
    int totalstudents(int n);
    int totalrevenue();
};

/*Defining functions of same names but from different classes*/
/*We have to use scope resolution (::)to define a function outside the class */
int College :: totalstudents(int n)
{
    students=n;
    cout<<"Total number of students in a college is : "<<students<<endl;
    cout<<"And rank is :"<<rank<<endl;  //This will print garbage value
}

int Coaching :: totalstudents(int n)
{
    students=n;
    cout<<"Total number of students in a coaching is : "<<students<<endl;
}
// int x= College :: rank;  //This is wrong 

int main()
{
    College GL;
    Coaching Allen;
    GL.totalstudents(6);
    // GL.College::totalstudents(6);   This is also correct
    Allen.totalstudents(5);
    GL.revenue();
    // GL.totalrevenue(); Since GL is object of College so it has no member named totalrevenue
    // GL.Coaching :: totalrevenue();  This is also wrong
    // College :: totalstudents();  Wrong!!!!
    
    GL.rank=99;
    cout<<GL.rank<<endl;
    return 0;
}
