#include<iostream>
using namespace std;
void add(int num1,int num2);
void subtract(int num1,int num2);
void mul(int num1,int num2);
void divide(int num1,int num2);
main()
{
    int num1,num2;
    char op;
    cout<<"enter 1st number:";
    cin>>num1;
    cout<<"enter 2nd number:";
    cin>>num2;
    cout<<"enter any operator(+,*,/,-):";
    cin>>op;
    if(op=='+')
    {
        add(num1,num2);
    }
}
void add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    cout<<"Sum:"<<sum;
   
}