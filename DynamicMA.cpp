/*----Written by :- Vishal Yadav----*/
/*----Date :- 03-05-23----*/

#include<iostream>
using namespace std;

int main()
{
    int* ptr= new int ;   //Variable allocation
    int* ptr2= new int[5];  //Array allocation
    int* ptr3= new int(74);   //Initialisation
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr3<<endl;

    /*Deleting the dynamically allocated memory*/

    delete ptr;
    delete [] ptr2;
    delete ptr3;
    cout<<*ptr3<<endl;
    cout<<ptr3;
    return 0;
}