#include<iostream>
using namespace std;
void add();
main()
{
    add();
}
void add()
{
    int num1,num2;
    int sum;
    cout<<"enter 1st number:";
    cin>>num1;
    cout<<"enter 2nd number:";
    cin>>num2;
    sum=num1+num2;
    cout<<"sum:"<<sum;
}