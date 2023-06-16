/*----Written by :- Vishal Yadav----*/
/*----Date :- 31-05-23----*/

/*Progrma to demonstrate the use of unions*/
/*Unions are just like classes and structures , it allows memory to be shared among different data types*/

#include<iostream>
using namespace std;

union share
{
    char ch;
    int a;
};

int main()
{
    share same = {'b'};
    cout<<"Character is: "<<same.ch<<endl;
    cout<<"Value is: "<<same.a<<endl;
    return 0;
}
