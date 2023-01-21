#include<iostream>
using namespace std;
 void greaterNumber(int num1,int num2);
main()
{
  
  int num1,num2;
  cout<<"enter 1st number:" ;
  cin>>num1;
  cout<<"enter 2nd number:" ;
  cin>>num2;
  greaterNumber(num1,num2);
}
 void greaterNumber(int num1,int num2)
 {
  if (num1>num2)  
  {
    cout<<"the greater number is:"<<num1;
  }
   if (num1<num2)  
  {
    cout<<"the greater number is:"<<num2;
  }
  
}
