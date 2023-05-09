/*----Written by :- Vishal Yadav----*/
/*----Date :- 24-04-23----*/

/*Program for function returning smallest(pointer) of two numbers.*/

#include<iostream>
using namespace std;

int* smallest(int* x,int* y);
//Main Function

int main()
{
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    /* int* p;
    p=smallest(&a,&b)<<endl;
    couy<<p;
    Same as below statement */
    cout<<*smallest(&a,&b)<<endl;    //Have to use * because we are getting address and had to dereference it
    return 0;
}

//Function returning pointer

int* smallest(int* x,int* y)
{
    if(*x<*y)
    return x;     //We returned address because function is of pointer type(int*)
    else
    return y;     
}