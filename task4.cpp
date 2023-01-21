#include<iostream>
using namespace std;
void isElligible(int age);
main()
{
    int age;
    cout<<"enter your age:";
    cin>>age;
    isElligible(age);
}
void isElligible(int age)
{
    if(age>=18)
    {
        cout<<"elligible";
    }
   
}