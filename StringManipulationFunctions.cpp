/*----Written by :- Vishal Yadav----*/
/*----Date :- 09-10-23----*/

/*Program to demonstrate the functions used with strings*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    //String Length Function
    string str = "Hello";
    cout<<str.length()<<endl;      
    cout<<str.size()<<endl;
    //Note:- strlen() is used with char arrays

    //String Relational Operators
    string str1 = "Coding";
    string str2 = "Programming";
    bool result;
    result = str1==str2;
    cout<<result<<endl;
    result = str1>str2;
    cout<<result<<endl;
    result = str1<str2;
    cout<<result<<endl;

    //The above code can be done using compare function
    cout<<str1.compare(str2)<<endl;    //One advantage of compare function is that it returns -1 in case of smaller string
    cout<<str1.compare(2 , 3, str2)<<endl;

    return 0;
}