/*----Written by :- Vishal Yadav----*/
/*----Date :- 27-04-23----*/

/*Program to find smallest element in an array using pointers*/

#include<iostream>
using namespace std;

int smallest(int* Arr,int n);

int main()
{
    int Arr[5]={6,3,8,5,2};
    cout<<smallest(Arr,5);
    return 0;
}

/*Function returning smallest element*/

int smallest(int* Arr,int n)
{
    int small=*Arr;
    for(int i=1; i<n; i++)
    {
        if(small>*(Arr+i))
        {
            small=*(Arr+i);
        }
    }
    return small;
}
