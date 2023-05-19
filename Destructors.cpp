/*----Written by :- Vishal Yadav----*/
/*----Date :- 18-05-23----*/

/*Demonstrate the use of Destructor*/
/*Destructors have many more uses but for now we just understood basics*/

#include<iostream>
using namespace std;

class num
{
    private:
    int a;
    int b;
    public:
    void func()
    {
        cout<<"Some Message"<<endl;
    }
    //Constructor
    num()
    {
        cout<<"Constructor is called"<<endl;
    }
    //Destructor
    
    ~num()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    cout<<"Constructor will be called as we have declared an object in the next line"<<endl;
    num obj;
    cout<<"Destructor will be called as object goes out of scope"<<endl;
    return 0;
}