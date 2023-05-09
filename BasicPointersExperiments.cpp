/*----Written by :- Vishal Yadav----*/
/*----Date :- 24-04-23----*/

#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    char* ch1=&ch;
    int a=4;
    int &b=a;    // This is an alias(nickname)
    int* p2;
    int* p3=NULL;
    int* pp;
    // cin>>pp;  Invalid as we cannot read pointer values because they are fixed memory locs
    int* p=&a;   // It can also be done as p=&a but in next line , iff pointer is declared earlier
    //  int* p4=&p;  //This is wrong because you have to use ** to assign another pointer to a pointer
    int** p4=&p; 
    // float* p5=&a;  //Float pointer but integer value
    // cout<<*p5;     //This will not work
    cout<<p+1<<endl;
    cout<<"a is "<<a<<" and "<<*p<<" and "<<**p4<<" and value of p "<<*p4<<" add of p "<<p4<<" "<<&p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*&a<<endl;
    // cout<<&*a<<endl;   generate error because a is not a pointer
    cout<<&*p<<endl;
    cout<<&a<<endl;
    cout<<p2<<endl;       // It will give random address
    cout<<p3<<endl;
    cout<<b<<endl;
    // cout<<&a<<" "<<&(a+2);    //& operator acts on lvalue but 2 is a rvalue
    return 0;
}