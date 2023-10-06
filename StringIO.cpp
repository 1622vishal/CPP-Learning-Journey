/*----Written by :- Vishal Yadav----*/
/*----Date :- 23-06-23----*/

/*Program to demonstrate the use of string input and output ,as we know that strings are instantiation of 
class so we can only use I/O operators by operator overloading */
/*We cannot use insertion(<<) and extraction(>>) operator directly with class objects ,just gave you insight 
how things work with classes*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Hello World";
    cout<<str<<endl;
    string name;
    cout<<"Enter your name : ";
    cin>>name;        //It ignores white spaces and stops when space is encountered
    
    cout<<"Your name is "<<name<<endl;
    string namefull;

    // https://www.geeksforgeeks.org/problem-with-getline-after-cin/
    /*The getline() function in C++ is used to read a string or a line from the input stream. The getline() function does not ignore leading white space characters. So special care should be taken care of about using getline() after cin because cin ignores white space characters and leaves it in the stream as garbage.*/

    getline(cin,namefull);     //It continues even after spaces
    
    cout<<"Your full name is "<<namefull<<endl;
    getline(cin, name , '.');     //(.) is the terminating character here ,the terminating charac is then discarded
    //getline function doesn't read terminating character
    cout<<"Your designation is "<<name<<endl;
    return 0;
}