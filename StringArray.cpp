/*----Written by :- Vishal Yadav----*/
/*----Date :- 09-10-23----*/

/*Program to demonstrate array of string*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello"; // This line stores Hello in str just like any other variable
    /*Now suppose we want to store multiple strings then what should we do, the answer to that is use array of string*/
    string str1[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "The days of the week are : " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << str1[i] << endl;
    }
    // This whole thing is simple as we can see, we just did the same thing we used to do with the numbers

    // Doing the same thing but with char arrays
    char str2[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "The days of the week are : " << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << str2[i][j];
        }
        cout<<endl;
    }
    //This also did the task

    //Now some experiment time
    string str3 = "Hello World";
    for(int i=0 ; i<11 ; i++)
    {
        cout<<str3[i]<<" ";
    }
    //We can also do this with strings 
    /*The reason accessing individual characters and accessing elements of a string or array works without errors is because C++ allows you to do both using the same syntax. This behavior is a result of operator overloading and the way C++ handles arrays and strings.
    The C++ compiler can differentiate between the two based on the type of the variable and the context in which it's used.*/
    return 0;
}