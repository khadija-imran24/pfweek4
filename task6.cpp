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
    if(op=='-')
    {
        subtract(num1,num2);
    }
    if(op=='*')
    {
        mul(num1,num2);
    }
    if(op=='/')
    {
        divide(num1,num2);
    }
}
void add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    cout<<"Sum:"<<sum;
   
}
void subtract(int num1,int num2)
{
    int sub;
    sub=num1-num2;
    cout<<"Subtract:"<<sub;
   
}
void mul(int num1,int num2)
{
    int mul;
    mul=num1*num2;
    cout<<"multiply:"<<mul;
   
}
void divide(int num1,int num2)
{
    int div;
    div=num1/num2;
    cout<<"divide:"<<div;
   
}


