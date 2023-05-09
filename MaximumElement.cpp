/*----Written by :- Vishal Yadav----*/
/*----Date :- 25-04-23----*/

/*Program for function returning maximum element in an array*/

#include<iostream>
using namespace std;

/*Fuction Declaration*/

int maxelement(int arr[],int n);

/*Main Function*/

int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the array:";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<maxelement(arr,size);
    return 0;
}

/*Function returning maximum element*/

int maxelement(int arr[],int n)
{
    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}