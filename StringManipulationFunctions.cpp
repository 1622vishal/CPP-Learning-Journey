/*----Written by :- Vishal Yadav----*/
/*----Date :- 09-10-23----*/

/*Program to demonstrate the functions used with strings*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    // String Length Function
    string str = "Hello";
    cout << str.length() << endl;
    cout << str.size() << endl;
    // Note:- strlen() is used with char arrays

    // String Relational Operators
    string str1 = "Coding";
    string str2 = "Programming";
    string str3 = "Coding";
    bool result;
    result = str1 == str2;
    cout << result << endl;
    result = str1 > str2;
    cout << result << endl;
    result = str1 < str2;
    cout << result << endl;

    // The above code can be done using compare function
    cout << str1.compare(str2) << endl;       // One advantage of compare function is that it returns -1 in case of smaller string
    cout << str1.compare(2, 3, str2) << endl; // ogr is less than Coding
    cout << str1.compare(str3) << endl;       // returns 0

    // Concatenating or Appeding two strings
    cout << str1 + str2 << endl;
    cout << str1.append(str2) << endl;
    cout << str1 << endl;
    cout << str1.append(str2, 2, 3) << endl;

    // Extracting a substring
    cout << str2.substr() << endl;
    cout << str2.substr(3) << endl;
    cout << str2.substr(3, 4) << endl;

    // Using find() function to search a substring
    string str4 = "This is planet Earth. Saturn is also a planet.Sun is not a planet.";
    string str5 = "planet";
    int index = str4.find(str5);
    cout << index << endl;
    index = str4.find("planet", 2);
    cout << index << endl;
    while (index <= str4.length())
    {
        cout << index << " ";
        index = str4.find(str5, index + 1);
    }
    cout<<endl;
    
    //Searching backwards
    int index1 = str4.rfind(str5);
    cout<<index1<<endl;

    //Searching for a character in a string
    cout<<str2.find_first_of("hdr")<<endl;
    cout<<str2.find_first_of("hdr" , 2)<<endl;
    cout<<str2.find_first_not_of("hdr")<<endl;
    cout<<str2.find_last_of("hdr")<<endl;
    cout<<str2.find_last_not_of("hdr")<<endl;
    cout<<str2.find_first_of("xyz")<<endl;

    //Accessing characters
    cout<<str2.at(4)<<endl;         //It checks out of range
    cout<<str[4]<<endl;    //easy way

    //Inserting in a string
    cout<<str2.insert(4, str3)<<endl;
    cout<<str2.insert(4, str3 ,2 ,2)<<endl;          //insert(pos1, str3, pos2, len2)  pos2 and len2 of str3 
    cout<<str3.insert(3, 4, 'C')<<endl;

    //Replacing a string(or part of a string) with another string 
    cout<<str4.replace(8, 6, "mother")<<endl;
    cout<<str4.replace(16, 4, str5, 3, 3)<<endl;     //The no. 3, 3 is of string str5

    //Erasing some part of a string
    cout<<str4.erase(6, 7)<<endl;
    str5.clear();
    cout<<str5<<endl;

    //Swapping two strings
    cout<<"String 1:-"<<str1<<endl;
    cout<<"String 2:-"<<str2<<endl;

    swap(str1 , str2);
    cout<<"String 1:-"<<str1<<endl;
    cout<<"String 2:-"<<str2<<endl;

    return 0;
}