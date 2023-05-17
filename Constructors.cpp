/*----Written by :- Vishal Yadav----*/
/*----Date :- 17-05-23----*/

/*Studying the use of Constructors*/

#include<iostream>
using namespace std;

class Animals
{
    private:
    int legs;
    int teeth;
    public:
    void qualities();
    void sound();

    /*Note :- Default constructors cannot be overloaded */
    
    Animals(int , int);
    // Animals(int , int);  This is wrong, we cannot define another constructor with same parameters
    //But constructor with different parameters are allowed such as:-
    Animals (int);
};

Animals :: Animals (int x)
{
    legs=x;
    teeth=34;
}

/*This is also a default constructor , if the arguments have default values*/
/*Animals :: Animals(int x=4, int y=6)
{
    legs=x;
    teeth=y;
}*/

Animals :: Animals(int x, int y)
{
    legs=x;
    teeth=y;
}
/*Animals :: Animals (int x=4, int y=32)
{
    cout<<"Absolutely same constructor"<<endl;
}*/

void Animals :: qualities()
{
    cout<<"Legs of any animal generally are: "<<legs<<endl;
    cout<<"Teeth of animals are: "<<teeth<<endl;
}
int main()
{
    Animals dog (4,16);
    Animals cat (5);

    // Animals cow;    Since we defined two comstructors but not default constructor so this statement shows eror
    //Also if we define a constructor then compiler will not create a default constructor 
    //A coompiler always define a constructor if we don't define it explicitly

    dog.qualities();
    cat.qualities();
    return 0;
}