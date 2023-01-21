#include<iostream>
using namespace std;
 
main()
{
  int num;
  cout<<"enter a number:" ;
  cin>>num;
 
  if (num%2==0)  
  {
    cout<<"even";
  }
  if(num%2!=0)
  {
    cout<<"odd";
  }
}