/*----Written by :- Vishal Yadav----*/
/*----Date :- 24-04-23----*/

/*Program to perform Selection Sort*/

#include<iostream>
using namespace std;

void selectionsort(int arr[], int n);

/*Main Function*/

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: "<<endl;
    for(int i=0; i< size; i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,size);
    cout<<"Sorted array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }

    return 0;
}

/*Sorting Function*/

void selectionsort(int arr[],int n)
{
    int min, temp ;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }

        // We can create a separate swap function also but it will result in hecticness.
    temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
}