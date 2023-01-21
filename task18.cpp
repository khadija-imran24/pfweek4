#include<iostream>
using namespace std;
void printName (string name);
main()
{ 
    string name;
     while(true)
    {
        cout<<"enter your name:"<<endl;
        cin>>name;
        if(name=="irzam")
        {
            printName(name);
        }
    }
}
void printName (string name)
{
            while(true)
            {
            cout<<name<<endl;
            }
}
    