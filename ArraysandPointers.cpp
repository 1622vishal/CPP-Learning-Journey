/*----Written by :- Vishal Yadav----*/
/*----Date :- 27-04-23----*/

/*Program to illustrate relationship between Arrays and Pointers*/

#include<iostream>
using namespace std;

int main()
{
    int Arr[5]={3,6,7,2,9};
    int* p=Arr+1;       // OK! We can assign address of next element using array name
    int* p4=Arr+4;
    cout<<"First Element"<<endl;
    cout<<Arr[0]<<" "<<*Arr<<endl;  //Because array name is a pointer, So * dereference the array name
    cout<<"Address of the array i.e., first element"<<endl;
    cout<<&Arr[0]<<" "<<Arr<<endl; 
    cout<<"Another way of finding the address and value:"<<endl;
    cout<<"Value: "<<*p<<" "<<"Address: "<<p<<endl;
    cout<<"Now for any element:"<<endl;
    cout<<"Second value: "<<*p<<" "<<Arr[1]<<" "<<*(Arr+1)<<endl;
    cout<<"Second Address: "<<p<<" "<<Arr+1<<" "<<&Arr[1]<<endl;
    cout<<"Another way of finding the value:"<<endl;
    cout<<"Values are: "<<p[-1]<<" "<<p[0]<<endl;
    cout<<p4-p<<endl;
    return 0;
}