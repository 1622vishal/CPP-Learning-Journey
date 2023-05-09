/*----Written by :- Vishal Yadav----*/
/*----Date :- 25-04-23----*/

/*Program to print Fibonacci Series*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Fibonacci Series:";
    cin>>n;
    int first=0;
    int second=1;
    int next;
    cout<<"The series is:";
    cout<<first<<" "<<second<<" ";
    for(int i=0; i<n-2; i++)
    {
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
    return 0;
}