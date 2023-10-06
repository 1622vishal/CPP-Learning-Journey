/*----Written by :- Vishal Yadav----*/
/*----Date :- 23-06-23----*/

/*Program to initialise string and to demonstrate basics of string*/

#include<iostream>
#include<string>       //Header file to use strings in our program
using namespace std;

int main()
{
    string s1;    //Empty string initialised 
    string s2("Library");      //Same as below statement
    string s3 = "Vishal Yadav";     //Initialised with some value
    string s4(s2);
    string s5 =s2;     //Both statements do the same thing
    string s6(5 , 'A');       
    string s7(s3, 4);
    string s10("Vishal" , 3);
    string s8="C++ is the best programming language!!!";
    string s9(s8 , 4 ,9);
    //string s11 = 'A';  Not allowed because A is a character 

    cout<<"Value of s1 is: "<<s1<<endl;
    cout<<"Value of s2 is: "<<s2<<endl;
    cout<<"Value of s3 is: "<<s3<<endl;
    cout<<"Value of s4 is: "<<s4<<endl;
    cout<<"Value of s5 is: "<<s5<<endl;
    cout<<"Value of s6 is: "<<s6<<endl;
    cout<<"Value of s7 is: "<<s7<<endl;
    cout<<"Value of s8 is: "<<s8<<endl;
    cout<<"Value of s9 is: "<<s9<<endl;
    cout<<"Value of s10 is: "<<s10<<endl;

    return 0;
}