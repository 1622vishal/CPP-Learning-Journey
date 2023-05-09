/*----Written by :- Vishal Yadav----*/
/*----Date :- 22-04-23----*/

#include<iostream>
using namespace std;

void frequencyandhistogram(int DataArray[] , int size);
int main()
{
    int DataArray[20];
    cout<<"Enter Data in Array\n";
    for(int i=0 ; i<20 ; i++)
    {
        cin>>DataArray[i];
        if (i==19)
        {
            break;
        }
    }
    frequencyandhistogram(DataArray, 20);
    return 0;
}

void frequencyandhistogram(int DataArray[] , int size)
{
    int frequency[4]={0};
    for(int j=0 ; j<size ; j++)
    {
        frequency[DataArray[j]]++;
    }
    for(int k =0 ; k<4 ; k++)
    {
        cout<<k<<" "<<frequency[k]<<" ";
        for(int x=0 ; x<frequency[k] ; x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
