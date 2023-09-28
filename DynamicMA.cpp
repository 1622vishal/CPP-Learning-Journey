/*----Written by :- Vishal Yadav----*/
/*----Date :- 03-05-23----*/

#include<iostream>
using namespace std;

int main()
{
    int* ptr= new int ;   //Variable allocation
    int* ptr2= new int[5];  //Array allocation
    int* ptr3= new int(74);   //Initialisation
    int* ptr4 =new int(457);
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr3<<endl;
    cout<<*ptr4<<endl;


    /*Deleting the dynamically allocated memory*/

    delete ptr;
    delete [] ptr2;
    delete ptr3;
    cout<<*ptr3<<endl;
    cout<<ptr3;

    /*Dangling Pointers*/
    /*Dangling pointers occur when a pointer continues to reference a memory location that has been deallocated (freed) or has gone out of scope. To prevent dangling pointers initialise pointer with NULL.*/
    delete ptr4;
    ptr4 = NULL;
    cout<<*ptr4;        //No Output

    return 0;
}