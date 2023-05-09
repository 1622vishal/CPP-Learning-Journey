/*----Written by :- Vishal Yadav----*/
/*----Date :- 22-04-23----*/

/*Program to perform BubbleSort*/

#include<iostream>
using namespace std;

void bubblesort(int arr[], int n);

/*Main Function*/

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,size);
    cout<<"The sorted array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}

/*Sorting Function*/

void bubblesort(int arr[], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    return;
}