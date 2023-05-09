/*----Written by :- Vishal Yadav----*/
/*----Date :- 24-04-23----*/

/*Program to perform Insertion Sort*/

#include<iostream>
using namespace std;

void insertionsort(int arr[],int n);

/*Main Function*/

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,size);
    cout<<"Sorted array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*Sorting Function*/

void insertionsort(int arr[],int n)
{
    int temp;
    for(int i=1; i<n; i++)
    {
        temp=arr[i];
        for(int j=i-1; j>=0; j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
